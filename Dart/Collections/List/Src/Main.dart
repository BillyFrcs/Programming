import 'dart:io';

void main(List<String> arguments) {
  //Save many data in a list
  List<int> value = [19, 5, 2, 19, 45];

  for (var i = 0; i < 5; i++) {
    stdout.write('${value[i]} ');
  }

  listString();

  dynamicList();

  spreadOperator();
}

void listString() {
  //Loops with list String
  var name = ['\nBilly', 'Franscois'];

  name.add('Kolibonso');

  for (var i = 0; i < name.length; i++) {
    name.forEach((name) => print(name)); //For print two times
  }

  name.insert(3, 'Sendy');

  print(name[3]);
}

dynamicList() {
  //Can fill with another data types variable
  List dList = [19, 'Billy', false];

  dList.removeAt(1); //remove at index

  print(dList[0]);
  print(dList[1]);
}

void spreadOperator() {
  dynamic data = ['code', 'dev', 'programmer'];
  dynamic value = [19, 08, 20, 20];

  var combine = [data, value];

  print(combine);
}
