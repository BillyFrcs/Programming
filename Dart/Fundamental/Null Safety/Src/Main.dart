void main(List<String> arguments) {
  String? Hobby = null;
  String? fav = "Programming";

  print('$Hobby');

  nullSafety(fav);
}

void nullSafety(String? fav) {
  if (fav != null) {
    print('Favorite = ${fav}');
  }
}
