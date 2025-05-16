<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>
<!DOCTYPE html>
<html>
<head>
    <title>Student Form</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css" rel="stylesheet">
</head>
<body class="container mt-5">
    <div class="card p-4 shadow-sm">
        <h2 class="mb-4">
            <c:choose>
                <c:when test="${student.id == 0}">Add New Student</c:when>
                <c:otherwise>Edit Student</c:otherwise>
            </c:choose>
        </h2>
        <form action="student" method="post">
            <input type="hidden" name="action" value="${student.id == 0 ? 'insert' : 'update'}"/>
            <input type="hidden" name="id" value="${student.id}"/>

            <div class="mb-3">
                <label class="form-label">Name</label>
                <input class="form-control" type="text" name="name" value="${student.name}" required/>
            </div>

            <div class="mb-3">
                <label class="form-label">Email</label>
                <input class="form-control" type="email" name="email" value="${student.email}" required/>
            </div>

            <button type="submit" class="btn btn-primary">Save</button>
            <a href="student" class="btn btn-secondary">Cancel</a>
        </form>
    </div>
</body>
</html>
