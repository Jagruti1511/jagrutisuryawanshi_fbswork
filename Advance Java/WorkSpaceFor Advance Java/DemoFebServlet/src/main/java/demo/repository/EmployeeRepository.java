package demo.repository;

import java.util.ArrayList;

import demo.model.Employee;

public interface EmployeeRepository {

	public boolean addEmployee(Employee e);
	
	public Employee searchEmployeeById(int id);
	
	public ArrayList<Employee> getAllEmployees();
	
	public boolean deleteEmployeeById(int id);

	public Employee getEmployeeById(int id);
	
	
	
}
