package com.arc.controller;

import javax.servlet.*;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.*;

import com.arc.dao.StudentDAO;
import com.arc.model.Student;

import java.io.IOException;
@WebServlet("/student")
public class StudentServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
	private StudentDAO dao;

    public void init() {
        dao = new StudentDAO();
    }

    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws IOException, ServletException {
        doGet(request, response);
    }

    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws IOException, ServletException {
        String action = request.getParameter("action");
        System.out.println("Get: "+action);
        
        if (action == null) action = "list";

        switch (action) {
            case "new":
                showForm(request, response);
                break;
            case "insert":
                insertStudent(request, response);
                break;
            case "edit":
                showEditForm(request, response);
                break;
            case "update":
                updateStudent(request, response);
                break;
            case "delete":
                deleteStudent(request, response);
                break;
            default:
                listStudents(request, response);
        }
    }

    private void listStudents(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        request.setAttribute("studentList", dao.getAll());
        RequestDispatcher dispatcher = request.getRequestDispatcher("list.jsp");
        dispatcher.forward(request, response);
    }

    private void showForm(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        request.setAttribute("student", new Student());
        RequestDispatcher dispatcher = request.getRequestDispatcher("form.jsp");
        dispatcher.forward(request, response);
    }

    private void showEditForm(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        int id = Integer.parseInt(request.getParameter("id"));
        Student student = dao.get(id);
        request.setAttribute("student", student);
        RequestDispatcher dispatcher = request.getRequestDispatcher("form.jsp");
        dispatcher.forward(request, response);
    }

    private void insertStudent(HttpServletRequest request, HttpServletResponse response) throws IOException {
        String name = request.getParameter("name");
        String email = request.getParameter("email");
        dao.insert(new Student(name, email));
        response.sendRedirect("student");
    }

    private void updateStudent(HttpServletRequest request, HttpServletResponse response) throws IOException {
        int id = Integer.parseInt(request.getParameter("id"));
        String name = request.getParameter("name");
        String email = request.getParameter("email");
        dao.update(new Student(id, name, email));
        response.sendRedirect("student");
    }

    private void deleteStudent(HttpServletRequest request, HttpServletResponse response) throws IOException {
        int id = Integer.parseInt(request.getParameter("id"));
        dao.delete(id);
        response.sendRedirect("student");
    }
}
