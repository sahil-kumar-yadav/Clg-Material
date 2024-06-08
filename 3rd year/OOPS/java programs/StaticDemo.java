import java.util.*;

class StaticVariable {
  int rollno;
  String name;
  static String college = "NIT";
  
  StaticVariable(int r, String n) {
    rollno = r;
    name = n;
  }

  void display() {
    System.out.println(rollno + " " + name + " " + college);
  }
}

public class StaticDemo {
  public static void main(String ar[]) {
    StaticVariable S1 = new StaticVariable(1, "Alice");
    StaticVariable S2 = new StaticVariable(2, "Bob");
    // System.out.println("main");
    S1.display();
    S2.display();
  }

}