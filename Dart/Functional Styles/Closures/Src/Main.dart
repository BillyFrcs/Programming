void main(List<String> arguments) {
  var s = sum(5);
  s();
  s();
}

Function sum(num n) {
  var a = 3;

  return () => print('${a + n++}');
}
