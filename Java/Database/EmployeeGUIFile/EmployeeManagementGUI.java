
// GUI Application (EmployeeManagementGUI.java)

import javax.swing.*;
import java.awt.*;

class EmployeeManagementGUI extends JFrame {
    private JTextField idField, nameField, salaryField;
    private DefaultListModel<String> listModel;
    private JList<String> employeeList;

    public EmployeeManagementGUI() {
        setTitle("Employee Management System");
        setSize(500, 400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout());

        JPanel inputPanel = new JPanel(new GridLayout(4, 2));
        inputPanel.add(new JLabel("ID:"));
        idField = new JTextField();
        inputPanel.add(idField);

        inputPanel.add(new JLabel("Name:"));
        nameField = new JTextField();
        inputPanel.add(nameField);

        inputPanel.add(new JLabel("Salary:"));
        salaryField = new JTextField();
        inputPanel.add(salaryField);

        JButton addButton = new JButton("Add Employee");
        addButton.addActionListener(e -> addEmployee());
        inputPanel.add(addButton);

        JButton updateButton = new JButton("Update Employee");
        updateButton.addActionListener(e -> updateEmployee());
        inputPanel.add(updateButton);

        add(inputPanel, BorderLayout.NORTH);

        listModel = new DefaultListModel<>();
        employeeList = new JList<>(listModel);
        refreshList();
        add(new JScrollPane(employeeList), BorderLayout.CENTER);

        JPanel buttonPanel = new JPanel();
        JButton deleteButton = new JButton("Delete Employee");
        deleteButton.addActionListener(e -> deleteEmployee());
        buttonPanel.add(deleteButton);

        JButton refreshButton = new JButton("Refresh List");
        refreshButton.addActionListener(e -> refreshList());
        buttonPanel.add(refreshButton);

        add(buttonPanel, BorderLayout.SOUTH);
    }

    private void addEmployee() {
        int id = Integer.parseInt(idField.getText());
        String name = nameField.getText();
        double salary = Double.parseDouble(salaryField.getText());
        EmployeeDAO.addEmployee(new Employee(id, name, salary));
        refreshList();
    }

    private void updateEmployee() {
        if (!employeeList.isSelectionEmpty()) {
            String selected = employeeList.getSelectedValue();
            int id = Integer.parseInt(selected.split(" - ")[0]);
            String name = nameField.getText();
            double salary = Double.parseDouble(salaryField.getText());
            EmployeeDAO.updateEmployee(id, name, salary);
            refreshList();
        }
    }

    private void deleteEmployee() {
        if (!employeeList.isSelectionEmpty()) {
            String selected = employeeList.getSelectedValue();
            int id = Integer.parseInt(selected.split(" - ")[0]);
            EmployeeDAO.deleteEmployee(id);
            refreshList();
        }
    }

    private void refreshList() {
        listModel.clear();
        for (Employee emp : EmployeeDAO.getAllEmployees()) {
            listModel.addElement(emp.toString());
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> new EmployeeManagementGUI().setVisible(true));
    }
}
