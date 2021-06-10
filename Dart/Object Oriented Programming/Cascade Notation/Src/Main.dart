void main(List<String> arguments) {
  Transportation('', '1D356F')
    ..type = 'Car'
    ..displayTransportation();
}

class Transportation {
  var type, serialCode;

  Transportation(this.type, this.serialCode);

  void displayTransportation() {
    print(type);
    print(serialCode);
  }
}
