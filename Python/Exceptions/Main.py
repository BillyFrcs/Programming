try:
     number = int(input("Enter a number: "))
     print(number)

except:
     print("Invalid Input, please enter number!")
     
     
x = 0

try:
     print(1/x)
     
except ZeroDivisionError:
     print("Cannot divide by zero!")
     
     
var_dict = {"average" : "5.0"}

try:
     print(f"Average is {var_dict['average']}")
     
except KeyError:
     print("Key not found in dictionary!")
     
except TypeError:
     print("You cannot divide string values!")
     
else:
     print("No exceptions occurred.")
     
finally:
     print("Execution completed.")
     