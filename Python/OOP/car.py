class Car:
    # private attributes
    __wheels = 4
    __doors = 4
    
    # attributes
    color = "Black"
    
    def __init__(self, color, brand, speed):
        self.color = color
        self.brand = brand
        self.speed = speed
        
    # @staticmethod
    def drive(self):
        self.speed += 10
        
        return f"The {self.color} {self.brand} is driving at {self.speed} mph."
    
    @classmethod
    def get_wheels(cls):
        return cls.__wheels


car_1 = Car("Red", "Toyota", 120)

print(car_1.color)

car_1.color = "Blue"

print(car_1.color)

# print(Car.color)

print(car_1.drive())

# print(Car.drive(car_1))

print(car_1.get_wheels())