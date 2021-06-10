/* extension <extension name> on <type> {
  (<member definition>)*
} */

//Sorting ascending
extension InsertionSort on List<int> {
  List<int> sorted() {
    var list = this, length = this.length;

    for (var i = 0; i < (length - 1); i++) {
      int min = i;

      for (var j = i + 1; j < length; j++) {
        if (list[j] < list[min]) {
          min = j;
        }
      }

      int temp = list[min];
      list[min] = list[i];
      list[i] = temp;
    }
    return list;
  }
}
