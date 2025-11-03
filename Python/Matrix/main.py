import numpy
import sys

# general list
list = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

# matrix list
matrix_list = list

print(matrix_list)
print(type(matrix_list))
print("Size of matrix list in bytes = ", sys.getsizeof(matrix_list) * len(matrix_list))

# matrix array
matrix_arr = numpy.array(list)

print(matrix_arr)
print(type(matrix_arr))
print("Size of matrix array in bytes =", matrix_arr.size * matrix_arr.itemsize)