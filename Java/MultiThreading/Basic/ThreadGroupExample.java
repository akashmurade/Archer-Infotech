
class Thread1 extends Thread {

    public Thread1() {}

    public Thread1(ThreadGroup tg, String name) {
        super(tg, name);
    }

    public void run() {
        // sleep
        try {
            sleep(1000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        System.out.println("In Thread1");                
    }
}

public class ThreadGroupExample {
    public static void main(String[] args) {
        // main thread group
        System.out.println(Thread.currentThread().getThreadGroup());

        // if the thread group is not changed since main thread belongs to main threadgroup t will belong to it as well
        Thread1 t = new Thread1();
        t.start();
        System.out.println(t.getThreadGroup());

        // another thread with changed threadgroup
        Thread1 t2 = new Thread1(new ThreadGroup("newThreadGroup"), "NewThread");
        t2.start();
        System.out.println(t2.getThreadGroup());
    }
}
