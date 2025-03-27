package com.example;
import java.sql.*;
import java.util.ArrayList;
import java.util.List;

public class EmployeeDAO {

    // Update these connection details to match your database configuration
    private final String jdbcURL = "jdbc:mysql://localhost:3306/EmployeeDB";
    private final String jdbcUsername = "root";
    private final String jdbcPassword = "root";

    public EmployeeDAO() {
        try {
            // Load the MySQL JDBC driver
            Class.forName("com.mysql.cj.jdbc.Driver");
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        }
    }

    // Utility method to get a DB connection
    private Connection getConnection() throws SQLException {
        return DriverManager.getConnection(jdbcURL, jdbcUsername, jdbcPassword);
    }

    // Insert a new employee record
    public void insertEmployee(Employee emp) {
        String sql = "INSERT INTO employees (name, dob, gender, email, phone, qualification, university, passingYear, company, designation, experience) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)";
        try (Connection connection = getConnection();
             PreparedStatement ps = connection.prepareStatement(sql)) {
            ps.setString(1, emp.getName());
            ps.setDate(2, Date.valueOf(emp.getDob())); // expecting yyyy-MM-dd
            ps.setString(3, emp.getGender());
            ps.setString(4, emp.getEmail());
            ps.setString(5, emp.getPhone());
            ps.setString(6, emp.getQualification());
            ps.setString(7, emp.getUniversity());
            ps.setInt(8, emp.getPassingYear());
            ps.setString(9, emp.getCompany());
            ps.setString(10, emp.getDesignation());
            ps.setInt(11, emp.getExperience());
            ps.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    // Update an existing employee record
    public void updateEmployee(Employee emp) {
        String sql = "UPDATE employees SET name=?, dob=?, gender=?, email=?, phone=?, qualification=?, university=?, passingYear=?, company=?, designation=?, experience=? WHERE id=?";
        try (Connection connection = getConnection();
             PreparedStatement ps = connection.prepareStatement(sql)) {
            ps.setString(1, emp.getName());
            ps.setDate(2, Date.valueOf(emp.getDob()));
            ps.setString(3, emp.getGender());
            ps.setString(4, emp.getEmail());
            ps.setString(5, emp.getPhone());
            ps.setString(6, emp.getQualification());
            ps.setString(7, emp.getUniversity());
            ps.setInt(8, emp.getPassingYear());
            ps.setString(9, emp.getCompany());
            ps.setString(10, emp.getDesignation());
            ps.setInt(11, emp.getExperience());
            ps.setInt(12, emp.getId());
            ps.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    // Delete an employee record by id
    public void deleteEmployee(int id) {
        String sql = "DELETE FROM employees WHERE id=?";
        try (Connection connection = getConnection();
             PreparedStatement ps = connection.prepareStatement(sql)) {
            ps.setInt(1, id);
            ps.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    // Retrieve a single employee by id
    public Employee getEmployeeById(int id) {
        Employee emp = null;
        String sql = "SELECT * FROM employees WHERE id=?";
        try (Connection connection = getConnection();
             PreparedStatement ps = connection.prepareStatement(sql)) {
            ps.setInt(1, id);
            ResultSet rs = ps.executeQuery();
            if (rs.next()) {
                emp = new Employee();
                emp.setId(rs.getInt("id"));
                emp.setName(rs.getString("name"));
                emp.setDob(rs.getDate("dob").toString());
                emp.setGender(rs.getString("gender"));
                emp.setEmail(rs.getString("email"));
                emp.setPhone(rs.getString("phone"));
                emp.setQualification(rs.getString("qualification"));
                emp.setUniversity(rs.getString("university"));
                emp.setPassingYear(rs.getInt("passingYear"));
                emp.setCompany(rs.getString("company"));
                emp.setDesignation(rs.getString("designation"));
                emp.setExperience(rs.getInt("experience"));
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }
        return emp;
    }

    // Retrieve all employee records
    public List<Employee> getAllEmployees() {
        List<Employee> list = new ArrayList<>();
        String sql = "SELECT * FROM employees";
        try (Connection connection = getConnection();
             Statement stmt = connection.createStatement();
             ResultSet rs = stmt.executeQuery(sql)) {
            while (rs.next()) {
                Employee emp = new Employee();
                emp.setId(rs.getInt("id"));
                emp.setName(rs.getString("name"));
                emp.setDob(rs.getDate("dob").toString());
                emp.setGender(rs.getString("gender"));
                emp.setEmail(rs.getString("email"));
                emp.setPhone(rs.getString("phone"));
                emp.setQualification(rs.getString("qualification"));
                emp.setUniversity(rs.getString("university"));
                emp.setPassingYear(rs.getInt("passingYear"));
                emp.setCompany(rs.getString("company"));
                emp.setDesignation(rs.getString("designation"));
                emp.setExperience(rs.getInt("experience"));
                list.add(emp);
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }
        return list;
    }
}
