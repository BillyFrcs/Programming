import exp

# positional or Keyword parameter
def rectangle (length, width):
    return length * width

print(rectangle(length = 10, width = 5))

# positional only parameter
def addition (a, b, /):
    return a + b

print(addition(10, 5))

# keyword only parameter
def greeting (*, name):
    return f"Hello, {name}!"

print(greeting(name = "Fenny"))

# variadic positional parameter
def calculation(*args):
    print(type(args))
    
    total = sum(args)
    
    return total

print(calculation(10, 20, 30, 40, 50))

# variadic keyword parameter
def print_info(**kwargs):
    info = ""
    
    for key, value in kwargs.items():
        info += key + ': ' + value + ", "
        
    return info

print(print_info(name = "Fenny", age = "28", city = "Tanjung Redeb", country = "Indonesia"))

print(exp.rectangle(length = 10, width = 5))

print(exp.name)