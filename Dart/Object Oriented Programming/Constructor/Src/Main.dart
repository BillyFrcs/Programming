void main(List<String> arguments) {
  //Calling default constructor
  final animal = new Animals('Dog', 'Indonesia');
  print(animal.nameAnimal);
  print(animal.animalOrigin);

  //Calling named constructor
  var systemProducts1 = new systemProducts.constructSystemProducts();
  print("Name product: ${systemProducts1.namedProduct}");
  print("Code product: ${systemProducts1.codeProduct}");
}

class Animals {
  var nameAnimal, animalOrigin;

  //Default constructor
  Animals(var name, var origin) {
    this.nameAnimal = name;
    this.animalOrigin = origin;
  }
}

class systemProducts {
  var namedProduct;
  var codeProduct;

  //Named constructor
  systemProducts(this.namedProduct, this.codeProduct);

  systemProducts.constructSystemProducts() {
    namedProduct = "Smarter Books";
    codeProduct = 19082002;
  }
}
