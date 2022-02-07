import pyautogui
import time

time.sleep(3)

filePath = "spam.txt"

file = open(filePath, "r")

for message in file:
    pyautogui.typewrite(message)
    pyautogui.press("enter")
