import 'Data.dart'; //Calling another file as library (Encapsulation)

void main(List<String> arguments) {
  Data d = new Data('Billy', 18, 10.5, 170);

  d.getName();
  d.getAge();
  d.getNumber();

  //Access setter
  d.setNum = 12.3;

  //Access getter
  print(d.height);
}
