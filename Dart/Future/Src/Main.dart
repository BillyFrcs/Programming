void main(List<String> arguments) {
  //Asynchronous
  getOrder().then((value) {
    print('Your order is ${value}');
  }).catchError((error) {
    print('Sorry ${error}');
  }).whenComplete(() => print('Thank you')); //More simple

  print('Getting your order...');
}

//Future
Future<dynamic> getOrder() {
  return Future.delayed(Duration(seconds: 2), () {
    var isStockAvailable = true;

    if (isStockAvailable) {
      return 'Chicken wings';
    } else {
      throw 'Stock is empty';
    }
  });
}
