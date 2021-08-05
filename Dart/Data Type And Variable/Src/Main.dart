void main() {
  print("Hello world");

  print("\n");

  //Check data types and declare variable
  //Using "var" it can use to find automatically data types
  var dataTypeIs = 19;
  print(dataTypeIs);
  print(dataTypeIs.runtimeType);

  var Hobby = 'Coding and programming';
  print(Hobby.runtimeType);
  print("Hobby " + Hobby);

  print("\n");

  //Data types
  int dataInteger = 50;
  print(dataInteger);

  double dataDouble = 5.13;
  print(dataDouble);

  num dataNum = 12.1908872328; //It can use all of data numbers
  print(dataNum);
  print(dataNum.runtimeType);

  String dataString = "Billy Programmer";
  String myAge = "18";
  print(dataString);

  int changeData = int.parse(myAge);
  print(myAge);
  print(changeData.runtimeType);

  print("\n");

  //Change int to String
  String officeName = "Microsoft";
  int officeNum = 1908;

  String changeIntToString = officeNum.toString();
  print(officeName);
  print(officeNum);
  print(changeIntToString.runtimeType);

  print("\n");

  //Change upper case and lower case
  String upperCase = "this is upper case";
  print(upperCase.toUpperCase());

  String lowerCase = "THIS IS LOWER CASE";
  print(lowerCase.toLowerCase());

  String splitData = "Split data";
  print(splitData.split(' '));

  print("\n");

  //String concatenation
  String firstName = "Billy";
  String lastName = "Franscois";
  print("My name is " + firstName + " " + lastName);
  print("${firstName.toUpperCase()} $lastName");

  print("\n");

  //Boolean contains "true or false"
  bool dataBoolTrue = true;
  bool dataBoolFalse = false;

  print(dataBoolTrue);
  print(dataBoolFalse);
}
