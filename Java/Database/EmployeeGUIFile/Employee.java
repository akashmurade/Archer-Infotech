import java.io.*;
import java.util.*;

// Model Class (Employee.java)
class Employee implements Serializable {
    private int id;
    private String name;
    private double salary;
    
    public Employee(int id, String name, double salary) {
        this.id = id;
        this.name = name;
        this.salary = salary;
    }
    
    public int getId() { return id; }
    public String getName() { return name; }
    public double getSalary() { return salary; }
    
    public void setName(String name) { this.name = name; }
    public void setSalary(double salary) { this.salary = salary; }
    
    @Override
    public String toString() {
        return id + " - " + name + " - " + salary;
    }
}
