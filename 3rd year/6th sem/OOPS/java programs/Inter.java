
import java.util.*;

interface A {
   public void meth1();

   public void meth2();
}

interface C {
   public void meth3();
}

public class Inter implements A, C {
   public void meth1() {
      System.out.println("METHOD 1");
   }

   public void meth2() {
      System.out.println("METHOD 2");
   }

   public void meth3() {
      System.out.println("METHOD 3");
   }

   public static void main(String Args[]) {
      Inter i = new Inter();
      i.meth1();
      i.meth2();
      i.meth3();
   }
}