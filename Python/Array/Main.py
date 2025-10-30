variable_list = [1, "Billy", 1.5, True]

for item in variable_list:
    print(f"Item: {item}, Type: {type(item)}")
    
variable_list.append("Fenny")

for index, item in enumerate(variable_list):
    print(f"Index: {index}, Item: {item}")
    
variable_list.remove(1.5)

for index, item in enumerate(variable_list):
    print(f"Index: {index}, Item: {item}")
    
variable_list.insert(2, "Sendy")

for index, item in enumerate(variable_list):
    print(f"Index: {index}, Item: {item}")