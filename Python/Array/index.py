var_arr = [22, 4, 66, 19, 90, 33, 12, 5, 78, 1]

left_pointer = var_arr[0]

for i in range(1, len(var_arr)):
    right_pointer = var_arr[i]
    
    if left_pointer > right_pointer:
        left_pointer = right_pointer
        
print(f"The smallest element in the array is: {left_pointer}")


var_arr = [22, 4, 66, 19, 90, 33, 12, 5, 78, 1]

left_pointer = var_arr[0]

for i in range(1, len(var_arr)):
    right_pointer = var_arr[i]
    
    if right_pointer > left_pointer:
        left_pointer = right_pointer
        
print(f"The biggest element in the array is: {left_pointer}")