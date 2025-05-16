package com.arc.app.dao;

import com.arc.app.entity.Student;
import java.util.List;

public interface StudentDAO {
    void insert(Student student);
    Student get(int id);
    List<Student> getAll();
    void update(Student student);
    void delete(int id);
}
