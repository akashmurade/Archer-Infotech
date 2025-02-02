class Utility
{
    // private constructor
    private Utility()
    {
        throw new UnsupportedOperationException("Cannot Instantiate Utility Class");
    }

    public static int add(int a, int b) {
        return a + b;
    }
}

public class MainUtility {
    public static void main(String[] args) {
        System.out.println("Add 4 + 5: " + Utility.add(4, 5));
        
    }
}
