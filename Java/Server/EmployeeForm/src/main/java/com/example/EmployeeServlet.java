package com.example;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.List;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

// Map the servlet to /EmployeeServlet
@WebServlet("/EmployeeServlet")
public class EmployeeServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
	private EmployeeDAO employeeDAO;

	public void init() {
		employeeDAO = new EmployeeDAO();
	}

	protected void doGet(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		// Decide action based on parameter. If not specified, show list.
		String action = request.getParameter("action");
		if ("delete".equals(action)) {
			int id = Integer.parseInt(request.getParameter("id"));
			employeeDAO.deleteEmployee(id);
			response.sendRedirect("EmployeeServlet");
		} else if ("edit".equals(action)) {
			int id = Integer.parseInt(request.getParameter("id"));
			Employee emp = employeeDAO.getEmployeeById(id);
			showEditForm(response, emp);
		} else {
			// Default: display all employees
			listEmployees(response);
		}
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		// Determine if it is a registration or update
		String action = request.getParameter("action");
		if ("update".equals(action)) {
			// Update an existing employee
			Employee emp = new Employee();
			emp.setId(Integer.parseInt(request.getParameter("id")));
			emp.setName(request.getParameter("name"));
			emp.setDob(request.getParameter("dob"));
			emp.setGender(request.getParameter("gender"));
			emp.setEmail(request.getParameter("email"));
			emp.setPhone(request.getParameter("phone"));
			emp.setQualification(request.getParameter("qualification"));
			emp.setUniversity(request.getParameter("university"));
			emp.setPassingYear(Integer.parseInt(request.getParameter("passingYear")));
			emp.setCompany(request.getParameter("company"));
			emp.setDesignation(request.getParameter("designation"));
			emp.setExperience(Integer.parseInt(request.getParameter("experience")));

			employeeDAO.updateEmployee(emp);
			response.sendRedirect("EmployeeServlet");
		} else {
			// Registration of a new employee
			Employee emp = new Employee();
			emp.setName(request.getParameter("name"));
			emp.setDob(request.getParameter("dob"));
			emp.setGender(request.getParameter("gender"));
			emp.setEmail(request.getParameter("email"));
			emp.setPhone(request.getParameter("phone"));
			emp.setQualification(request.getParameter("qualification"));
			emp.setUniversity(request.getParameter("university"));
			emp.setPassingYear(Integer.parseInt(request.getParameter("passingYear")));
			emp.setCompany(request.getParameter("company"));
			emp.setDesignation(request.getParameter("designation"));
			emp.setExperience(Integer.parseInt(request.getParameter("experience")));

			employeeDAO.insertEmployee(emp);
			response.sendRedirect("EmployeeServlet");
		}
	}

	// Method to display all employees in an HTML table
	private void listEmployees(HttpServletResponse response) throws IOException {
		List<Employee> list = employeeDAO.getAllEmployees();
		response.setContentType("text/html");
		PrintWriter out = response.getWriter();
		out.println("<html><head><title>Employee List</title></head><body>");
		out.println("<h2>Employee List</h2>");
		out.println("<table border='1' cellpadding='5'>");
		out.println("<tr>" + "<th>ID</th>" + "<th>Name</th>" + "<th>DOB</th>" + "<th>Gender</th>" + "<th>Email</th>"
				+ "<th>Phone</th>" + "<th>Qualification</th>" + "<th>University</th>" + "<th>Passing Year</th>"
				+ "<th>Company</th>" + "<th>Designation</th>" + "<th>Experience</th>" + "<th>Actions</th>" + "</tr>");

		for (Employee emp : list) {
			out.println("<tr>");
			out.println("<td>" + emp.getId() + "</td>");
			out.println("<td>" + emp.getName() + "</td>");
			out.println("<td>" + emp.getDob() + "</td>");
			out.println("<td>" + emp.getGender() + "</td>");
			out.println("<td>" + emp.getEmail() + "</td>");
			out.println("<td>" + emp.getPhone() + "</td>");
			out.println("<td>" + emp.getQualification() + "</td>");
			out.println("<td>" + emp.getUniversity() + "</td>");
			out.println("<td>" + emp.getPassingYear() + "</td>");
			out.println("<td>" + emp.getCompany() + "</td>");
			out.println("<td>" + emp.getDesignation() + "</td>");
			out.println("<td>" + emp.getExperience() + "</td>");
			out.println("<td>" + "<a href='EmployeeServlet?action=edit&id=" + emp.getId() + "'>Edit</a> | "
					+ "<a href='EmployeeServlet?action=delete&id=" + emp.getId()
					+ "' onclick='return confirm(\"Are you sure?\");'>Delete</a>" + "</td>");
			out.println("</tr>");
		}
		out.println("</table>");
		out.println("<br><a href='index.html'>Register New Employee</a>");
		out.println("</body></html>");
	}

	// Method to show the edit form pre-filled with employee data
	private void showEditForm(HttpServletResponse response, Employee emp) throws IOException {
		response.setContentType("text/html");
		PrintWriter out = response.getWriter();
		out.println("<html><head><title>Edit Employee</title></head><body>");
		out.println("<h2>Edit Employee</h2>");
		out.println("<form action='EmployeeServlet' method='post'>");
		out.println("<input type='hidden' name='action' value='update'>");
		out.println("<input type='hidden' name='id' value='" + emp.getId() + "'>");
		out.println("Name: <input type='text' name='name' value='" + emp.getName() + "' required><br><br>");
		out.println("Date of Birth: <input type='date' name='dob' value='" + emp.getDob() + "' required><br><br>");
		out.println("Gender: <select name='gender' required>");
		out.println("<option value='Male'" + ("Male".equals(emp.getGender()) ? " selected" : "") + ">Male</option>");
		out.println(
				"<option value='Female'" + ("Female".equals(emp.getGender()) ? " selected" : "") + ">Female</option>");
		out.println("<option value='Other'" + ("Other".equals(emp.getGender()) ? " selected" : "") + ">Other</option>");
		out.println("</select><br><br>");
		out.println("Email: <input type='email' name='email' value='" + emp.getEmail() + "' required><br><br>");
		out.println("Phone: <input type='text' name='phone' value='" + emp.getPhone() + "' required><br><br>");
		out.println("Qualification: <input type='text' name='qualification' value='" + emp.getQualification()
				+ "' required><br><br>");
		out.println("University: <input type='text' name='university' value='" + emp.getUniversity()
				+ "' required><br><br>");
		out.println("Passing Year: <input type='number' name='passingYear' value='" + emp.getPassingYear()
				+ "' required><br><br>");
		out.println("Company: <input type='text' name='company' value='" + emp.getCompany() + "'><br><br>");
		out.println("Designation: <input type='text' name='designation' value='" + emp.getDesignation() + "'><br><br>");
		out.println("Experience: <input type='number' name='experience' value='" + emp.getExperience() + "'><br><br>");
		out.println("<input type='submit' value='Update'>");
		out.println("</form>");
		out.println("<br><a href='EmployeeServlet'>Back to Employee List</a>");
		out.println("</body></html>");
	}
}
