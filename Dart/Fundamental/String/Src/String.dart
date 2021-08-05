void main(List<String> arguments) {
  String data = "Mobile app dev \n";
  print("Role: $data");

  String hobby = 'Programming and coding \n';
  print('Hobby: $hobby');

  print('"Billy\" Franscois'); //To fix ambiguous (\)

  dynamic name = 'Billy';
  print('Hy ${name}');

  //Calculate with String
  print("5 * 5 = ${5 * 5}");

  //Unicode
  print('Love (\u2665)');
}
