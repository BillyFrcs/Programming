/*Abstract class cannot create the object
*this should using subclass or another class
*to create an object in main function*/
abstract class Data {
  String name = 'Billy';
  int age = 18;
}

class Developer extends Data {
  String getName() {
    print(name);

    return name;
  }

  int getAge() {
    print(age);

    return age;
  }
}