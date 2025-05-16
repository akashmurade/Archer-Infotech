<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>
<!DOCTYPE html>
<html>
<head>
    <title>Student List</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css" rel="stylesheet">
</head>
<body class="container mt-5">
    <div class="d-flex justify-content-between align-items-center mb-4">
        <h2>Student Records</h2>
        <a href="student?action=new" class="btn btn-success">+ Add Student</a>
    </div>

    <c:choose>
        <c:when test="${not empty studentList}">
            <table class="table table-bordered table-hover">
                <thead class="table-dark">
                    <tr>
                        <th>ID</th>
                        <th>Name</th>
                        <th>Email</th>
                        <th>Actions</th>
                    </tr>
                </thead>
                <tbody>
                    <c:forEach var="s" items="${studentList}">
                        <tr>
                            <td>${s.id}</td>
                            <td>${s.name}</td>
                            <td>${s.email}</td>
                            <td>
                                <a href="student?action=edit&id=${s.id}" class="btn btn-sm btn-warning">Edit</a>
                                <a href="student?action=delete&id=${s.id}" class="btn btn-sm btn-danger"
                                   onclick="return confirm('Are you sure you want to delete this student?');">Delete</a>
                            </td>
                        </tr>
                    </c:forEach>
                </tbody>
            </table>
        </c:when>
        <c:otherwise>
            <div class="alert alert-info">No students found. Please add some!</div>
        </c:otherwise>
    </c:choose>
</body>
</html>
