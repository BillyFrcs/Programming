public class Dog extends Hewan {
     private boolean _isMove;

     public Dog() {
          _isMove = true;
     }

     public void Move(boolean isMove) {
          this._isMove = isMove;

          if (_isMove) // if _isMove is true
          {
               System.out.println("Dog is move...");
          } else {
               System.out.println("Dog is not move...");
          }
     }
}
