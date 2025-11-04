import car

class SportCar(car.Car):
    def turbo(self):
        self.speed += 30
        
        return f"The {self.color} {self.brand} is now turbocharged at {self.speed} mph."
    
    # override
    def drive(self):
        self.speed += 20
        
        return f"The {self.color} {self.brand} is driving fast at {self.speed} mph."
    
    # super
    def super_drive(self):
        base_drive = super().drive()
        return f"{base_drive} with super drive!"
    
sport_car_1 = SportCar("Yellow", "Ferrari", 150)

print(sport_car_1.turbo())
print(sport_car_1.drive())
print(sport_car_1.super_drive())