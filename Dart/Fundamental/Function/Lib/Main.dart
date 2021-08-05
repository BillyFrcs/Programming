void main(List<String> arguments) {
  namedOptional(dev: 'Billy', ID: 1908); //Modify the arguments value
}

void namedOptional({var dev = 'bil', var ID = 1234}) {
  print('$dev, $ID');
}
