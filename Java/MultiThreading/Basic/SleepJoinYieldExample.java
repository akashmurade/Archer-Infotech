class PrintsOneToFive extends Thread {
    public void run() {
        for(int i = 1; i <= 5; i++) {
            // Sleep
            // try {
            //     Thread.sleep(1000);
            // } catch (InterruptedException e) {
            //     e.printStackTrace();
            // }

            System.out.println(Thread.currentThread().getName() + ": " + i);
        }
    }
}

public class SleepJoinYieldExample {
    public static void main(String[] args) {
        PrintsOneToFive t1 = new PrintsOneToFive();
        PrintsOneToFive t2 = new PrintsOneToFive();
        
        t1.start();
        
        // join
        try {
            t1.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        Thread t3 = new Thread() {
            int i = 5;
            public void run() {
                while (i > 0) {
                    System.out.println("Hello from " + Thread.currentThread().getName());
                    // Sleep
                    // try {
                    //     Thread.sleep(1000);
                    // } catch (InterruptedException e) {
                    //     e.printStackTrace();
                    // }
                    Thread.yield();
                    i--;
                }
            }
        };
        
        t3.start();
        
        t2.start();

    }
}

// Output with no delay
/*
Thread-0: 1
Thread-0: 2
Thread-0: 3
Thread-0: 4
Thread-0: 5
Thread-1: 1
Thread-1: 2
Thread-1: 3
Thread-1: 4
Thread-1: 5
Hello from Thread-2
Hello from Thread-2
Hello from Thread-2
Hello from Thread-2
Hello from Thread-2
*/