import java.util.*;

@SuppressWarnings("unused")
public class ConstructorDemo {

  String languages;

  ConstructorDemo(String lang) {
    languages = lang;
    System.out.println(languages + " Programming Language");
  }
  // void printdata(){
  // System.out.println(languages + " Programming Language");
  // }

  public static void main(String ar[]) {

    ConstructorDemo obj1 = new ConstructorDemo("Java");
    ConstructorDemo obj2 = new ConstructorDemo("Python");
    ConstructorDemo obj3 = new ConstructorDemo("C++");
    // obj1.printdata();
    // obj2.printdata();
    // obj3.printdata();
  }
}