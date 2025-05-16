package com.arc.app;

import com.arc.app.dao.*;
import com.arc.app.entity.Student;

import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        StudentDAO dao = new StudentDAOImpl();
        Scanner sc = new Scanner(System.in);

        while (true) {
            System.out.println("\n--- Student Management ---");
            System.out.println("1. Insert");
            System.out.println("2. View All");
            System.out.println("3. View By ID");
            System.out.println("4. Update");
            System.out.println("5. Delete");
            System.out.println("6. Exit");
            System.out.print("Enter choice: ");
            int ch = sc.nextInt();
            sc.nextLine(); // consume newline

            switch (ch) {
                case 1:
                    Student s = new Student();
                    System.out.print("Enter name: ");
                    s.setName(sc.nextLine());
                    System.out.print("Enter email: ");
                    s.setEmail(sc.nextLine());
                    dao.insert(s);
                    break;

                case 2:
                    List<Student> students = dao.getAll();
                    for (Student stu : students) {
                        System.out.println(stu);
                    }
                    break;

                case 3:
                    System.out.print("Enter ID: ");
                    int id = sc.nextInt();
                    Student student = dao.get(id);
                    System.out.println(student != null ? student : "Not found.");
                    break;

                case 4:
                    System.out.print("Enter ID to update: ");
                    int uid = sc.nextInt(); sc.nextLine();
                    Student stu = dao.get(uid);
                    if (stu != null) {
                        System.out.print("New name: ");
                        stu.setName(sc.nextLine());
                        System.out.print("New email: ");
                        stu.setEmail(sc.nextLine());
                        dao.update(stu);
                    } else {
                        System.out.println("Student not found.");
                    }
                    break;

                case 5:
                    System.out.print("Enter ID to delete: ");
                    dao.delete(sc.nextInt());
                    break;

                case 6:
                    System.out.println("Exiting...");
                    System.exit(0);
            }
        }
    }
}

