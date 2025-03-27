public class YieldExample {
    public static void main(String[] args) {

        for(int i = 0; i < 50; i++) {
            int effectivelyFinal = i; //this design ensures that the inner class is not inadvertently modifying the state of the enclosing scope
            new Thread() {
                public void run() {
                    setName("Thread " + effectivelyFinal); 
                    if(effectivelyFinal == 5) {
                        System.out.println(getName() + " is yielding.");
                        Thread.yield();
                    }
                    System.out.println(getName() + " got executed.");
                }
            }.start();
        }
    }
}