void main(List<String> arguments) {
  //Save many unique data
  Set<num> someNumbers = {1, 2, 5}; //To clear duplicate values

  print(someNumbers);

  Set<num> setNumbers = new Set.from([3, 6, 1, 3, 6]); //Same as above

  print(setNumbers);

  var addNum = [1, 2];

  addNum.add(3); //Just add one value
  addNum.addAll([4, 5]); //Can add many values

  print(addNum);
}
