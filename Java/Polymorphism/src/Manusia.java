public class Manusia {
     protected String _name;
     protected int _age;
     protected String _gender;

     public Manusia(String name, int age, String gender)
     {
          this._name = name;
          this._age = age;
          this._gender = gender;
     }

     protected void View()
     {
          System.out.println("Name\t: " + this._name);
          System.out.println("Age\t: " + this._age);
          System.out.println("Gender\t: " + this._gender);
     }
}
