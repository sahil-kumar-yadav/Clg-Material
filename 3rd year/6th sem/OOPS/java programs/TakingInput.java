import java.util.*;

public class TakingInput {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number");
        // int num = sc.nextInt();
        // float fnum = sc.nextFloat();hell
        String str = sc.nextLine();
        int len = str.length();
        System.out.println("len is"+len);
        
        // System.out.println("number is "+ num);
        // System.out.println("float number is "+fnum);
        System.out.println("string is "+str);
        
    }
}
