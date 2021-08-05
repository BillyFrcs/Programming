mixin Value implements Type {
  void printValue() {
    String name = 'Franscois';

    print(name);
  }
}

mixin Data implements Type {
  num numbers = 18;
  void printData() {
    print(numbers);
  }
}

void main(List<String> arguments) {
  var type = Type();

  type.dataDev();
}

//Using abstract
abstract class Developer {
  String name = 'Billy';
  void dataDev();
}

class Type extends Developer {
  @override
  void dataDev() {
    print(name);
  }
}
