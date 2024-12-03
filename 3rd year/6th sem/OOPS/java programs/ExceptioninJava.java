import java.util.*;


public class ExceptioninJava {
  static void checkAge(int age) {
    if (age < 18) {
      throw new ArithmeticException("Access denied - You must be at least 18 years old.");
    }
    else {
      System.out.println("Access granted - You are old enough!");
    }
    // System.out.println("end");
  }

  public static void main(String ar[]) {
    checkAge(15); // Set age to 15 (which is below 18...)
    
  }
}