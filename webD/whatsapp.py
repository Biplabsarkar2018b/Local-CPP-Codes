from email import message
import pyautogui as pt
import time

limit = input("Enter Limit: ")
message = input("enter msg: ")

i = 0
time.sleep(3)
while i<int(limit):
    pt.typewrite(message)
    pt.press("enter")
    i+=1