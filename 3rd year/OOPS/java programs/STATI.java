import java.util.*;

class Stat {
    static int large(int x, int y, int z) {
        int a, b, c;
        a = x;
        b = y;
        c = z;
        if ((a > b) && (a > c))
            return a;
        else if ((b > a) && (b > c))
            return b;
        else
            return c;
    }
}

public class STATI {
    public static void main(String ar[]) {
        System.out.println(Stat.large(23, 56, 45));
        System.out.println(Stat.large(34, 78, 4));
    }
}