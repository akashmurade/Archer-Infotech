
// GUI Application (EmployeeManagementGUI.java)

import java.awt.*;
import javax.swing.*;
import javax.swing.table.DefaultTableModel;

public class EmployeeManagementGUI extends JFrame {
    private JTextField txtId, txtName, txtSalary;
    private JTable table;
    private DefaultTableModel model;

    public EmployeeManagementGUI() {
        setTitle("Employee Management System");
        setSize(600, 400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout());

        JPanel inputPanel = new JPanel(new GridLayout(4, 2));
        inputPanel.add(new JLabel("ID:"));
        txtId = new JTextField();
        inputPanel.add(txtId);

        inputPanel.add(new JLabel("Name:"));
        txtName = new JTextField();
        inputPanel.add(txtName);

        inputPanel.add(new JLabel("Salary:"));
        txtSalary = new JTextField();
        inputPanel.add(txtSalary);

        JButton btnAdd = new JButton("Add");
        btnAdd.addActionListener(e -> addEmployee());
        inputPanel.add(btnAdd);

        JButton btnUpdate = new JButton("Update");
        btnUpdate.addActionListener(e -> updateEmployee());
        inputPanel.add(btnUpdate);

        JButton btnDelete = new JButton("Delete");
        btnDelete.addActionListener(e -> deleteEmployee());
        inputPanel.add(btnDelete);

        add(inputPanel, BorderLayout.NORTH);

        model = new DefaultTableModel(new String[] { "ID", "Name", "Salary" }, 0);
        table = new JTable(model);
        add(new JScrollPane(table), BorderLayout.CENTER);

        refreshTable();
        setVisible(true);
    }

    private void addEmployee() {
        int id = Integer.parseInt(txtId.getText());
        String name = txtName.getText();
        double salary = Double.parseDouble(txtSalary.getText());
        EmployeeDAO.addEmployee(new Employee(id, name, salary));
        refreshTable();
    }

    private void updateEmployee() {
        int id = Integer.parseInt(txtId.getText());
        String name = txtName.getText();
        double salary = Double.parseDouble(txtSalary.getText());
        EmployeeDAO.updateEmployee(id, name, salary);
        refreshTable();
    }

    private void deleteEmployee() {
        int id = Integer.parseInt(txtId.getText());
        EmployeeDAO.deleteEmployee(id);
        refreshTable();
    }

    private void refreshTable() {
        model.setRowCount(0);
        for (Employee emp : EmployeeDAO.getAllEmployees()) {
            model.addRow(new Object[] { emp.getId(), emp.getName(), emp.getSalary() });
        }
    }

    public static void main(String[] args) {
        new EmployeeManagementGUI();
    }
}