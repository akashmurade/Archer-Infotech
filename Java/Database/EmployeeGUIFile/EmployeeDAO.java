
// Data Access Object (EmployeeDAO.java)

import java.io.*;
import java.util.*;

class EmployeeDAO {
    private static final String FILE_NAME = "employees.txt";

    public static List<Employee> getAllEmployees() {
        List<Employee> employees = new ArrayList<>();
        try (ObjectInputStream ois = new ObjectInputStream(new FileInputStream(FILE_NAME))) {
            employees = (List<Employee>) ois.readObject();
        } catch (Exception ignored) {
        }
        return employees;
    }

    public static void saveEmployees(List<Employee> employees) {
        try (ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream(FILE_NAME))) {
            oos.writeObject(employees);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static void addEmployee(Employee emp) {
        List<Employee> employees = getAllEmployees();
        employees.add(emp);
        saveEmployees(employees);
    }

    public static void updateEmployee(int id, String newName, double newSalary) {
        List<Employee> employees = getAllEmployees();
        boolean updated = false;
        for (Employee emp : employees) {
            if (emp.getId() == id) {
                emp.setName(newName);
                emp.setSalary(newSalary);
                updated = true;
                break;
            }
        }
        if (updated) {
            saveEmployees(employees);
        }
    }

    public static void deleteEmployee(int id) {
        List<Employee> employees = getAllEmployees();
        employees.removeIf(emp -> emp.getId() == id);
        saveEmployees(employees);
    }
}