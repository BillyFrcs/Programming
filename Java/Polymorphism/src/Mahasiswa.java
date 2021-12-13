public class Mahasiswa extends Manusia {

     protected String _campusName;

     public Mahasiswa(String name, int age, String gender, String campusName)
     {
          super(name, age, gender);

          this._campusName = campusName;
     }

     protected void View()
     {
          super.View();

          System.out.println("Campus\t: " + _campusName);
     }
     
}
