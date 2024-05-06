import java.util.*;

public class Reverse {
    public static void main(String ar[]) {
        System.out.println("Enter a line of text: ");
        // scanner class ka use karke first object banaya
        // then object sy data le liya
        Scanner s1 = new Scanner(System.in); // Input statement in Java...Similar to cin in C++
        String s = s1.nextLine();   // method used to take complete sting as input
        
        int l = s.length();
        // int l = str.length();
        // int l1 = ch.length; //both are same
        char ch[] = s.toCharArray();
        System.out.println();
        for (int i = l - 1; i >= 0; i--) {
            // reverse nahi kiya just end sy print kar diya hai
            System.out.print(ch[i]);
        }
    }
}