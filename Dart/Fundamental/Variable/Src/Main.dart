void dynamicTypes() {
  dynamic val = ['b', 'i', 'l', 'l', 'y']; //For all data types

  print(val);
}

void main(List<String> arguments) {
  var name = "Billy", number = 19;
  print('$name, $number');

  num value = 2.5; //int and double
  print(value);

  listMap();
  dynamicTypes();

  return null;
}

void listMap() {
  List value = [1, 9, 5];
  Map mapKey = {"F": 19, "B": 20};

  print(value);
  print(mapKey);
}
