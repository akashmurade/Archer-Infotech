public class InterruptExample {
    public static void main(String[] args) {
        Thread t = new Thread() {
            public void run() {
                try {
                    for(int i = 0; i < 5; i++) {
                        System.out.println("Thread t runs.");
                        System.out.println("Going to sleep for a sec");
                        sleep(1000);
                    }
                } 
                catch(InterruptedException e) {
                    System.out.println("Thread Interrupted.");
                }
            }
        };
        t.interrupt();
        System.out.println("Status of isInterrupted after thread t is interrupted when it is not in any of the states to get interrupted: " + t.isInterrupted());        
        t.start();
        System.out.println("Main Thread is going to interrupt Thread t");
        t.interrupt();
        System.out.println("Main Thread last statement");
    }
}
