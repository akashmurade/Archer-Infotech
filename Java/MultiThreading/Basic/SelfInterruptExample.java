class CheckInterrupt extends Thread {
    public void run() {
        int i = 1;
        while(i <= 15) {
            try {
                System.out.println("i: " + i);
                sleep(1000);
                if(i == 5) {
                    interrupt();
                }
            }
            catch(InterruptedException e) {
                System.out.println("Interrupted and caught.");
                break;
            }
            i++;
        }
    }
}

public class SelfInterruptExample {
    public static void main(String[] args) {
        CheckInterrupt t = new CheckInterrupt();
        t.start();   
    }
}

// Output
/*
i: 1
i: 2
i: 3
i: 4
i: 5
i: 6
Interrupted and caught.
*/
