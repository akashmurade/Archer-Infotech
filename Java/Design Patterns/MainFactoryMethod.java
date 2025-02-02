class FactoryMethod
{
    private String name;

    // private constructor
    private FactoryMethod(String name) {
        this.name = name;
    }

    public static FactoryMethod createProduct(String type) {
        if(type.equalsIgnoreCase("Laptop")) {
            return new FactoryMethod("Laptop");
        }
        else if(type.equalsIgnoreCase("Mobile")) {
            return new FactoryMethod("Mobile");
        }
        else {
            return new FactoryMethod("Unknown Product");
        }
    }

    public void display() {
        System.out.println("Product: " + name);
    }
}

public class MainFactoryMethod
{
    public static void main(String[] args) {
        FactoryMethod laptop = FactoryMethod.createProduct("Laptop");
        laptop.display();
        FactoryMethod tablet = FactoryMethod.createProduct("Tablet");
        tablet.display();
    }
}