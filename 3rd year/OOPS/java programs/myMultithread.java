import java.util.*;

class Mythread1 extends Thread {
    // thread class sy extend kar rahe hai i.e Thread class ka istemal karke
    // MultithreadingDemo class banae hai
    // override kar rahe hai
    public void run() {
        int i = 30;
        while (i > 0) {
            System.out.println("Thread 1  is running");
            i--;
        }

    }
}

class Mythread2 extends Thread {

    public void run() {
        int i = 30;
        while (i > 0) {
            System.out.println("Thread 2  is running");
            i--;
        }
    }
}

public class myMultithread {
    public static void main(String[] args) {
        Mythread1 obj1 = new Mythread1();
        Mythread2 obj2 = new Mythread2();
        obj1.start();
        obj2.start();

    }
}