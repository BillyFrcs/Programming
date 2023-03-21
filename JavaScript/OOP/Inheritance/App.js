class Person
{
     constructor(firstName, lastName)
     {
          this.firstName = firstName;
          this.lastName = lastName;
     }

     GetName = () =>
     {
          console.log(this.firstName + " " + this.lastName);
     }
}

class Developer extends Person
{
     GetJob()
     {
          console.log(".NET Developer");
     }
}

var person = new Developer("Billy", "Franscois");

person.GetName();
person.GetJob();