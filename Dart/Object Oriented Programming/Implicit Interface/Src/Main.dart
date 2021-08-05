void main(List<String> arguments) {
  Cats c = new Cats('Meow', 'Black');

  c.printName();
  c.printSkinColor();
}

class Animals {
  var name, skinColor;

  Animals(this.name, this.skinColor);
}

//Subclass with inheritance
class Body extends Animals {
  @override
  Body(var name, var skinColor) : super(name, skinColor);
}

//Class implements (Implicit interface)
class Cats extends Body implements Animals {
  Cats(var name, var skinColor) : super(name, skinColor);

  void printName() {
    print(name);
  }

  void printSkinColor() {
    print(skinColor);
  }
}
