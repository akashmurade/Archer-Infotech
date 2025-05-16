package com.arc.app.dao;


import com.arc.app.entity.Student;
import jakarta.persistence.*;

import java.util.List;

public class StudentDAOImpl implements StudentDAO {

    private EntityManagerFactory emf = Persistence.createEntityManagerFactory("studentPU");

    public void insert(Student student) {
        EntityManager em = emf.createEntityManager();
        EntityTransaction tx = em.getTransaction();

        tx.begin();
        em.persist(student);
        tx.commit();
        em.close();
    }

    public Student get(int id) {
        EntityManager em = emf.createEntityManager();
        Student student = em.find(Student.class, id);
        em.close();
        return student;
    }

    public List<Student> getAll() {
        EntityManager em = emf.createEntityManager();
        List<Student> list = em.createQuery("FROM Student", Student.class).getResultList();
        em.close();
        return list;
    }

    public void update(Student student) {
        EntityManager em = emf.createEntityManager();
        EntityTransaction tx = em.getTransaction();

        tx.begin();
        em.merge(student);
        tx.commit();
        em.close();
    }

    public void delete(int id) {
        EntityManager em = emf.createEntityManager();
        EntityTransaction tx = em.getTransaction();

        Student student = em.find(Student.class, id);
        if (student != null) {
            tx.begin();
            em.remove(student);
            tx.commit();
        }
        em.close();
    }
}
