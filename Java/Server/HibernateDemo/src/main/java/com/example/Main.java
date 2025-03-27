package com.example;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

public class Main {
	public static void main(String[] args) {
		Student student = new Student(2, "Some", "some@gmail.com");
		
		SessionFactory factory = new Configuration()
				.addAnnotatedClass(com.example.Student.class)
				.configure()
				.buildSessionFactory();
		
		Session session = factory.openSession();
		
		Transaction transaction = session.beginTransaction();
		
//		session.persist(student);
//		Student s = session.find(Student.class, 1); // Eager Fetching
//		Student s = session.byId(Student.class).getReference(1); // Lazy Fetching
//		System.out.println(s);
		
		
//		session.merge(student);
		
		session.remove(session.find(Student.class, 2));
		
		transaction.commit();
		
		session.close();
		
		factory.close();
		
	}
}
