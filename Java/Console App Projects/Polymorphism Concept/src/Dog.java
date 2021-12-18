public class Dog extends Hewan {
     private Boolean _isRun;

     public void Run(Boolean isRun) {
          this._isRun = isRun;

          if (this._isRun) {
               System.out.println("Dog is run...");
          } else {
               System.out.println("Dog is not run.");
          }
     }
}
