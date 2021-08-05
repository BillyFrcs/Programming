void main(List<String> arguments) async {
  print('Getting your order...');

  try {
    var order = await getOrder();
    print('Your order is ${order}');
  } catch (error) {
    print('Sorry ${error}');
  }
  /*finally {
     print('Thank you'); same as whenCompiled method
  }*/
}

Future<dynamic> getOrder() {
  return Future.delayed(Duration(seconds: 5), () {
    var isStockAvailable = false;
    if (isStockAvailable) {
      return 'Milk';
    } else {
      return 'empty';
    }
  });
}
