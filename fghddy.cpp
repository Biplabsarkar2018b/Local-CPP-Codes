#include<iostream>
#include<numeric>
#include<vector>

using namespace std;

int myoperator(int a, int b )
{
    return a*b;
}

int main()
{
    vector<int> v;
    
    for(int i = 0 ; i < 10; i++) {
    v.push_back(i);
    }
    
    /* now vector v is : 0,1,2,3,4,5,6,7,8,9  */
    
    int result;
    
    accumulate(v.begin(), v.end(), result) ;
    
    /* as no operator is specified, accumulate add all the elements 
    between v.begin() and v.end() and store the sum in result */ 
    
    /* now result = 45 */
    
    accumulate(v.begin(), v.end(), result, myoperator) ;
    
    /* applies myoperator on all the elements in the range v.begin() and v.end() and store them in result */ 
    
    /* now result = 9!  */
}
