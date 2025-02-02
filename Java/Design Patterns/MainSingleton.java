class Singleton
{
    // instance variables
    private static Singleton instance;
    private String msg;
    
    // Private Constructor
    private Singleton() 
    {
        System.out.println("Object Constructed");
    }

    // Singleton object creater
    public static Singleton getInstance(String msg) 
    {
        if(instance == null) {
            instance = new Singleton();
            instance.msg = msg;
        }
        return instance;
    }

    public String getMessage()
    {
        return msg;
    }
}

public class MainSingleton
{
    public static void main(String[] args) {
        Singleton obj1 = Singleton.getInstance("One");
        Singleton obj2 = Singleton.getInstance("Two");
        
        System.out.println("Hashcode of obj1: " + obj1.hashCode() + "\tmsg: " + obj1.getMessage());
        System.out.println("Hashcode of obj2: " + obj2.hashCode() + "\tmsg: " + obj2.getMessage());
    }
}