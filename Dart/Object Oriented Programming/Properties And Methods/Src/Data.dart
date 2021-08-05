class Data {
  //Using encapsulation (private)
  //Always using (_underscore when create private properties)
  String _name;

  int _age, _height;

  double _number;

  Data(this._name, this._age, this._number, this._height);

  String getName() {
    print(_name);

    return _name;
  }

  void getAge() {
    print(_age);
  }

  double getNumber() {
    if (_number < 30.5) {
      _number += 5.5;
      print(_number);
    }

    return _number;
  }

  //Setter to access private properties
  set setNum(double num) {
    _number = num;

    print(_number);
  }

  //Getter
  int get height => _height;
}
