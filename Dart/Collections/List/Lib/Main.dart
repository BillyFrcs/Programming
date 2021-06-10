void main() {
  //List is like array contains data
  List dataList = [6, 8, 2, 9, 10];
  print(dataList);
  print(dataList.reversed); //Change data position
  print(dataList[4]);

  print("\n");

  List dataTypeList = ["Billy", 14, 19.08];
  print(dataTypeList);
  print(dataTypeList.runtimeType);

  print("\n");

  //List and method
  List addDataToList = [6, 4, 8];
  addDataToList.insert(0, 'Franscois');
  addDataToList.add(12);
  addDataToList[1] = 9; //Change data index
  print(addDataToList);
  print(addDataToList.length); //Check total index
}
