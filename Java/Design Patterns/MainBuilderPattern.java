
class Product
{
    private String name;
    private int price;
    private String category;

    private Product(Builder builder)
    {
        this.name = builder.name;
        this.price = builder.price;
        this.category = builder.category;
    }

    public static class Builder
    {
        private String name;
        private int price;
        private String category;

        public Builder setName(String name)
        {
            this.name = name;
            return this;
        }

        public Builder setPrice(int price)
        {
            this.price = price;
            return this;
        }

        public Builder setCategory(String category)
        {
            this.category = category;
            return this;
        }

        public Product build()
        {
            return new Product(this);
        }
    }

    @Override
    public String toString()
    {
        return "Product Name : " + name + "\tProduct Price : " + price + "\tProduct Category: " + category;
    }
}
public class MainBuilderPattern {
    public static void main(String[] args) {
        Product obj1 = new Product.Builder().build();
        System.out.println(obj1);
        Product obj2 = new Product.Builder().setName("Akash").setPrice(1000).setCategory("A").build();
        System.out.println(obj2);
    }
}
