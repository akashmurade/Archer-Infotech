import java.lang.reflect.Method;

public class MethodOverloading {
    // MethodOverloading to simulate Default Arguments
    public void display() {
        String msg = "Default Message";
        System.out.println("Message: " + msg);
    }

    public void display(String msg) {
        System.out.println("Message: " + msg);
    }

    public static void main(String[] args) {
        MethodOverloading ob = new MethodOverloading();
        ob.display(); // default value of msg here is Default Message
        ob.display("Hello"); // default value is simulated as overridden using MethodOverloading
    }
}
