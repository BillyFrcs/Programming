class Car:
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year
        self.odometer_reading = 0

    def get_descriptive_name(self):
        return f"{self.year} {self.make} {self.model}"

    def read_odometer(self):
        return f"This car has {self.odometer_reading} miles on it."

    def update_odometer(self, mileage):
        if mileage >= self.odometer_reading:
            self.odometer_reading = mileage
        else:
            print("You can't roll back an odometer!")

    def increment_odometer(self, miles):
        if miles >= 0:
            self.odometer_reading += miles
        else:
            print("You can't increment the odometer with negative miles!")
            

my_car = Car('Toyota', 'Corolla', 2020)

print(my_car.get_descriptive_name())
print(my_car.read_odometer())

my_car.update_odometer(15000)
print(my_car.read_odometer())

my_car.increment_odometer(500)
print(my_car.read_odometer())

my_car.update_odometer(14000)  # This should trigger the rollback warning