class Animal:
    def __init__(self, name, age, species):
        self.name = name
        self.age = age
        self.species = species

class Cat(Animal):
    def description(self):
        return f"{self.name} is a {self.age}-year-old {self.species}."
    
    def sound(self):
        return "Meow!"
    
myCat = Cat("Neko", 3, "Persian")

print(myCat.description())
print(myCat.sound())