import 'dart:io';

//Scope variable (global)
var price;
num discount = 0;
var totalDiscount;

void main(List<String> arguments) {
  totalDiscount = checkDiscount();

  print('You have to pay ${price - totalDiscount}');
}

num checkDiscount() {
  stdout.write('Enter price: ');
  price = num.parse(stdin.readLineSync()!);

  if (price >= 70000) {
    discount = (10 / 100) * price;
  } else {
    print("You can't get discount");
  }

  return discount;
}
