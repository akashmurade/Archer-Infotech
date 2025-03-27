// Q2: Implement a program that prints the state of a thread at various points: before starting, after starting, and when it finishes execution. Use Thread.getState() to display the thread states.

class Resource {
    public static synchronized void blockTest(Thread m) {
        try {Thread.sleep(5000);} catch(InterruptedException e) {}
        System.out.println("Main Thread state: " + m.getState());
    }
}

class MyThread extends Thread {
    Thread mainThread;
    public MyThread(Thread mainThread) {
        this.mainThread = mainThread;
    }

    public void run() {
        System.out.println("Thread state while running: " + this.getState());
        try {Thread.sleep(2000);} catch(InterruptedException e) {}
        Resource.blockTest(mainThread);
        System.out.println("Main Thread state: " + mainThread.getState());
    }
}

public class ThreadStateExample {
    public static void main(String[] args) {
        Thread mainThread = Thread.currentThread();
        MyThread t = new MyThread(mainThread);
        System.out.println("Thread state after creating: " + t.getState());
        t.start();
 
        try {Thread.sleep(1000);} catch(InterruptedException e) {} // in order to make main thread wait for t to complete its execution
        System.out.println("State of t when it might be sleeping: " + t.getState());
        try {Thread.sleep(1500);} catch(InterruptedException e) {}
        Resource.blockTest(t);

        try {t.join();} catch(InterruptedException e) {}
        System.out.println("Thread state after the execution: " + t.getState());

    }
}