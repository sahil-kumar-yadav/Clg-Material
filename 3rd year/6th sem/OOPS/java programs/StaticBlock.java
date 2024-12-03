import java.util.*;

public class StaticBlock {
  static {
    // this block runs before the main program
    System.out.println("Static block is invoked");
  }

  public static void main(String sr[]) {
    // public sift ek class ko he rakh skte hai
    System.out.println("Hello main");
  }

}