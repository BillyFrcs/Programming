void main(List<String> arguments) {
  //Create object
  var myCar = new Car();

  myCar.carName = ('Lamborgini');
  myCar.carColor = ("Black");
  myCar.carNum = (19082002);

  print("Car name: ${myCar.carName}");
  print("Car color: ${myCar.carColor}");
  print("Car number: ${myCar.carNum}s");

  //Called function method
  myCar.carStart();
  print(myCar.carRoad());
  myCar.carStop();

  print('\n');

  //Create an object from the class
  var developerData = Developer('Billy', 18);
  developerData.printName();
  developerData.printAge();
}

//Create class
class Car {
  var carName, carColor, carNum;

  //Method
  void carStart() {
    print('$carName has start');
  }

  String carRoad() {
    return '$carName has goes';
  }

  void carStop() {
    print('$carName has stopped');
  }
}

class Developer {
  var devName;
  int age;

  Developer(this.devName, this.age); //Constructor

  void printName() {
    print('Developer name is ${devName}');
  }

  void printAge() {
    print('Developer age, ${age}');
  }
}
