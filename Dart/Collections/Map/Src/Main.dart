void main(List<String> arguments) {
  //Map contain 'key' : 'value'
  //Save many with key and value
  Map varMap = {'Name': 'Billy', 'Age': 18};
  print(varMap);
  print(varMap.keys);
  print(varMap.values);
  print(varMap['Name']);

  accessKeyValue();

  getMap();
}

int accessKeyValue() {
  Map value = {'Number': '19'};

  print('Number is ${value['Number']}');

  var code = {'Framework': 'Flutter', 'Engine game': 'Unreal engine'};

  print(code.keys);
  print(code.values);

  //Add new value
  code['Engine game'] = 'Unity engine';

  print(code);

  return 0;
}

void getMap() {
  Map<String, dynamic> value = {'Name': 'Billy', 'Age': 18};

  print(value);
}
