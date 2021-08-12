import hashlib  # pip install hashlib

stringHash = input("enter message to generate code :")
resultHash = hashlib.md5(stringHash.encode())
print("the hexadecimal equivalent is :", end="")
print(resultHash.hexdigest())

"""
enter message to generate code :morning
the hexadecimal equivalent is :c7c3169c21f1d92e9577871831d067c8
"""
