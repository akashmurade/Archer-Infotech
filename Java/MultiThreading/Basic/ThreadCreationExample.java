// Q1: Write a program that starts three threads. Each thread should print "Hello from Thread X", where X is the thread number (1, 2, 3). Ensure that the threads run concurrently and you get an alternating print order.

class MyThread extends Thread {
    
    private int no; // Thread Number
    public MyThread(int n) {
        no = n;
    }

    public void run() {
        System.out.println("Hello from Thread " + no);
    }

}

public class ThreadCreationExample {
    public static void main(String[] args) {
        MyThread t1 = new MyThread(1);
        MyThread t2 = new MyThread(2);
        MyThread t3 = new MyThread(3);
        t1.start();
        t2.start();
        t3.start();
    }

}
