void main(List<String> arguments) {
  String? Hobby = null;
  String? fav = "Programming";
  String? name = "Billy";

  print('$Hobby');
  print(name);

  nullSafety(fav);
}

void nullSafety(String? fav) {
  if (fav != null) {
    print('Favorite = ${fav}');
  }
}
