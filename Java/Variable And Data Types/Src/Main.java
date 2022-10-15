public class Main {
     public static void main(String[] args) throws Exception {
          // Java variable and data types
          // String
          String name = "Billy ";
          String lastName = "Franscois";
          System.out.println("Name: " + name + lastName + "\n");
          
          // int
          int number = 19;
          System.out.println("Value number = " + number + "\n");
           
          // Final (const) cannot modify the value
          final int Num = 5;
          System.out.println("Const number = " + Num + "\n");

          // float
          float floatingNumber = 5.6f;
          float scientist = 23e4f;
          System.out.println("Floating number = " + floatingNumber + "\n");
          System.out.println("Scientist number = " + scientist + "\n");

          // double
          double value= 14.6d;
          System.out.println("Number = " + value + "\n");

          // boolean
          boolean getValue = true;
          System.out.println("Get value = " + getValue + "\n");

          // char
          char letter = 'B';
          System.out.println("Letter: " + letter + "\n");

          // short (short number int)
          short num = 7;
          short num1 = 4;
          int result = (num + num1);
          System.out.println("Result sum = " + result + "\n");

          // long and byte (int)
          long longNumber = 123654L;
          byte byteNum = 8;
          System.out.println("Long number = " + longNumber + " " + "Byte number = " + byteNum + "\n");
     }
}