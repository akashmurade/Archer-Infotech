class Num
{
    private int n;

    public Num(int n) {
        this.n = n;
    }
    
    public void setN(int n) {
        this.n = n;
    }

    public int getN() {
        return n;
    }

    public String toString() {
        return "" + n;
    }
}

class IntegerTest 
{

    public static void swap(Num i, Num j) {
        int temp = i.getN();
        i.setN(j.getN());
        j.setN(temp);
    }

    public static void main(String[] args) {
        Num i = new Num(10);
        Num j = new Num(20);

        System.out.println("Before: i: " + i + " \tj: " + j);
        swap(i, j);
        System.out.println("After: i: " + i + " \tj: " + j);
    }
}