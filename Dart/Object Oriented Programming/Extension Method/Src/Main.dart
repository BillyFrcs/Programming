import 'Extension.dart';

void main(List<String> arguments) {
  var numbers = [9, 3, 1, 7, 4];
  print('Unsorted numbers = ${numbers}');

  var sortedNumbers = numbers.sorted();
  print('Sorted numbers ${sortedNumbers}');
}
