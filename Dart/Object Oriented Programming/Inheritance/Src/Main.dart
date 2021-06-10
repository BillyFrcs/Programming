import 'Animals.dart';

void main(List<String> arguments) {
  Dog d = new Dog('Garry', 'Brown');

  d.getName();
  d.getColor();

  Animals a = new Animals('Bob', 'White');
  print(a.name);
  print(a.color);
}

class Dog extends Animals {
  Dog(var name, var color) : super(name, color); //This construct should same

  getName() {
    print(name);
  }

  getColor() {
    print(color);
  }
}
