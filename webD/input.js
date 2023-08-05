let inputArr = process.argv.slice(2);
let fs = require("fs");
let path = require("path");

let command = inputArr[0];

let types = {
    media: ["mp4","mkv"],
    archives: ['zip','rar'],
    documents: ['docx','doc','pdf','xlxs','xls','txt'],
    app: ['exe','pkg'],
    cpp: ['cpp'],
    html: ['html'],
    js: ['js'],
    css: ['css']

}


switch (command) {
    case "tree":
        treeFunc(inputArr[1]);
        break;
    case "organize":
        organizeFunc(inputArr[1]);
        break;
    case "help":
        helpFunc(inputArr[1]);
        break;

    default:
        console.log("Please Input Right Command");
        break;
}


function treeFunc(dirPath){
    let p;
    if(dirPath==undefined) {
        console.log("Kindly Enter Dir. Path");
        return;
    }else{
        let doesExist = fs.existsSync(dirPath);
        if(doesExist){
            p = path.join(dirPath,"organized_files");
            if(!fs.existsSync(p))
                fs.mkdirSync(p);
        }else{
            console.log("Path does not exist");
            return;
        }
    }


    organizeHelper(dirPath,p);
}

function organizeFunc(dirPath){
    let p;
    if(dirPath==undefined) {
        console.log("Kindly Enter Dir. Path");
        return;
    }else{
        let doesExist = fs.existsSync(dirPath);
        if(doesExist){
            p = path.join(dirPath,"organized_files");
            if(!fs.existsSync(p))
                fs.mkdirSync(p);
        }else{
            console.log("Path does not exist");
            return;
        }
    }


    organizeHelper(dirPath,p);
}



//organize helper-------------
function  organizeHelper(src,dest){
    //reading all the files--------------
    let childs = fs.readdirSync(src);
    for(let i=0;i<childs.length;i++){
        let adrss = path.join(src,childs[i]);
        let isfile = fs.lstatSync(adrss).isFile();
        if (isfile) {
          let catgry = getCategory(childs[i]);
          sendFiles(adrss,dest,catgry);
        }
    }
}

function sendFiles(adrss,dest,catgry){
    let catPath = path.join(dest,catgry);
    if(!fs.existsSync(catPath)){
        fs.mkdirSync(catPath);
    }

    let fileName = path.basename(adrss);
    let destFilePath = path.join(catPath,fileName);
    fs.copyFileSync(adrss,destFilePath);  
    fs.unlinkSync(adrss);  
}

function getCategory(file){
    let extnsn = path.extname(file);
    extnsn = extnsn.slice(1);
    for(let type in types){
        let cTypeArr = types[type];
        for(let i=0;i<cTypeArr.length;i++){
            if (extnsn==cTypeArr[i]) {
                return type;
            }
        }
    }

    return "others"
}




















function helpFunc(){
    console.log(`
    List of All the Commands:
                node input.js tree "directoryPath"
                node input.js organize "dirPath"
                node input.js help
    
    `);
}