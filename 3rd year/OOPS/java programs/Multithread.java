import java.util.*;
class MultithreadingDemo extends Thread {
    // thread class sy extend kar rahe hai i.e Thread class  ka istemal karke MultithreadingDemo class banae hai
    // override kar rahe hai
    public void run()
    {
        try {
            // Displaying the thread that is running
            System.out.println("Thread " + Thread.currentThread().getId()+ " is running");
        }
        catch (Exception e) {
            // Throwing an exception
            System.out.println("Exception is caught");
        }
    }
}
 

public class Multithread {
    public static void main(String[] args)
    {
        int n = 8; // Number of threads
        for (int i = 0; i < n; i++) {
            MultithreadingDemo object
                = new MultithreadingDemo();

            object.start(); // thread ko start karne ky ly start method chllna padta hai // yeh start method automatically run ko internaly run kar dega


        }
    }
}