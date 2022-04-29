class Developer
{
     constructor(name, role)
     {
          this.name = name;
          this.role = role;
     }

     getName = () => this.name;

     getRole = () => this.role;
}

const dev = new Developer("Billy", ".NET Developer");

console.log(`Name ${dev.getName()}`);
console.log(`Role ${dev.getRole()} \n`);

class Car
{
     constructor(color, model, engineCap, registrationNum)
     {
          this.color = color;
          this.model = model;
          this.engineCap = engineCap;
          this.registrationNum = registrationNum;
     }

     getColor()
     {
          return this.color;
     }

     getModel()
     {
          return this.model;
     }

     setColor(Color)
     {
          this.color = Color;

          console.log(this.color);
     }

     setModel(Model)
     {
          this.model = Model;

          console.log(this.model);
     }
}

const car = new Car("Blue", "Lamborghini", 4.0, "KA-01-HH-1234");

console.log(`Color ${car.getColor()}, Model ${car.getModel()}`);
car.setColor("Green");
car.setModel("Ferrari");