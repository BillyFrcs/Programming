import array

x = [1, 2, 3, 4, 5]

print(x)
print(x[3])

y = array.array("b", [1, 2, 3, 4, 5])

print(y)
print(type(y))


var_list = [1, 2, 3]

for element in var_list:
    print(id(element))
    

var_arr = [0 for i in range(10)]

print(var_arr)

for i in range(10):
    var_arr[i] = i
    
print(var_arr)
print(var_arr[5])


numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

for i in range(len(numbers)):
    current_element = numbers[i]
    next_index = i+1
    
    if next_index < len(numbers):
        next_element = numbers[next_index]
    else:
        next_element = None
        
    print(f"Current Element: {current_element}, Next Element: {next_element}")