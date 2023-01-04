def BubbleSortAscending(array):
    for i in range(len(array)):
        for j in range(0, len(array) - i - 1):
            if array[j] > array[j + 1]:
                temp = array[j]
                array[j] = array[j + 1]
                array[j + 1] = temp


def BubbleSortDescending(array):
    for i in range(len(array)):
        for j in range(0, len(array) - i - 1):
            if array[j] < array[j + 1]:
                array[j], array[j + 1] = array[j + 1], array[j]


data = [10, 45, 1, 11, 8]

print('Before sorting: ')
print(data)

BubbleSortAscending(data)

print('Sorted in Ascending Order:')
print(data)

BubbleSortDescending(data)

print('Sorted in Descending Order:')
print(data)
