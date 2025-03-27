package com.example;

import java.io.IOException;
import java.io.PrintWriter;
import java.util.Arrays;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/FormServlet")
public class FormServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		response.setContentType("text/html");
		
		String username = request.getParameter("username");
		String password = request.getParameter("password");
		String gender = request.getParameter("gender");
		String[] skills = request.getParameterValues("skill");
		String country = request.getParameter("country");
		String[] languages = request.getParameterValues("languages");
		String userId = request.getParameter("userId");
		String comments = request.getParameter("comments");
		String dob = request.getParameter("dob");
		PrintWriter out = response.getWriter();
		out.println("<html><body>");
		
		out.println("<h1>Welcome " + username + "</h1>");
		out.println("<p>Password: " + password + "</p>");
		out.println("<p>Gender: " + gender + "</p>");
		out.println("<p>Skills: " + Arrays.toString(skills) + "</p>");
		out.println("<p>Country: " + country + "</p>");
		out.println("<p>Languages: " + Arrays.toString(languages) + "</p>");
		out.println("<p>Hidden Field Value: " + userId + "</p>");
		out.println("<p>Comments: " + comments + "</p>");
		out.println("<p>DOB: " + dob + "</p>");
		
		
		out.println("</body></html>");
	}
}
