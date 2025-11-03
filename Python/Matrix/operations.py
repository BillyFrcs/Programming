import numpy as np

# matrix 2x2
matrix = [[9, 0],
          [8, -5]]

def_matrix = [[0 for i in range(2)] for j in range(2)]

for i in range(len(matrix)):
    for j in range(len(matrix[0])):
        def_matrix[i][j] = matrix[i][j] * 2
        
print(def_matrix)

# matrix 2x2 using NumPy
var_matrix = np.array([[9, 0],
                       [8, -5]])

result_matrix = var_matrix * 2

print(result_matrix)