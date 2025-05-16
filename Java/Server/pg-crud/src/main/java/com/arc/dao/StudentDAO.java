package com.arc.dao;

import java.sql.*;
import java.util.*;

import com.arc.model.Student;

public class StudentDAO {
    private final String JDBC_URL = "jdbc:postgresql://localhost:5432/studentdb";
    private final String USER = "postgres";
    private final String PASSWORD = "root";

    private Connection connect() throws SQLException {
    	try {
    		Class.forName("org.postgresql.Driver");    	
    		return DriverManager.getConnection(JDBC_URL, USER, PASSWORD);
		} catch(ClassNotFoundException e) {
			e.printStackTrace();
			return null;
		}
    }

    public List<Student> getAll() {
        List<Student> list = new ArrayList<>();
        String sql = "SELECT * FROM students ORDER BY id";

        try (Connection conn = connect();
             Statement stmt = conn.createStatement();
             ResultSet rs = stmt.executeQuery(sql)) {

            while (rs.next()) {
                list.add(new Student(rs.getInt("id"), rs.getString("name"), rs.getString("email")));
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return list;
    }

    public void insert(Student student) {
        String sql = "INSERT INTO students(name, email) VALUES (?, ?)";
        try (Connection conn = connect();
             PreparedStatement pstmt = conn.prepareStatement(sql)) {
            pstmt.setString(1, student.getName());
            pstmt.setString(2, student.getEmail());
            pstmt.executeUpdate();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void update(Student student) {
        String sql = "UPDATE students SET name = ?, email = ? WHERE id = ?";
        try (Connection conn = connect();
             PreparedStatement pstmt = conn.prepareStatement(sql)) {
            pstmt.setString(1, student.getName());
            pstmt.setString(2, student.getEmail());
            pstmt.setInt(3, student.getId());
            pstmt.executeUpdate();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void delete(int id) {
        String sql = "DELETE FROM students WHERE id = ?";
        try (Connection conn = connect();
             PreparedStatement pstmt = conn.prepareStatement(sql)) {
            pstmt.setInt(1, id);
            pstmt.executeUpdate();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public Student get(int id) {
        Student student = null;
        String sql = "SELECT * FROM students WHERE id = ?";
        try (Connection conn = connect();
             PreparedStatement pstmt = conn.prepareStatement(sql)) {
            pstmt.setInt(1, id);
            ResultSet rs = pstmt.executeQuery();
            if (rs.next()) {
                student = new Student(rs.getInt("id"), rs.getString("name"), rs.getString("email"));
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return student;
    }
}
