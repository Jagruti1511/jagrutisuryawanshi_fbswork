package demo.service;

import java.util.ArrayList;

import demo.model.Employee;
import demo.repository.EmployeeDBDao;
import demo.repository.EmployeeRepository;

public class EmployeeService {

	EmployeeRepository empRepo=new EmployeeDBDao();
	
	
	public boolean addEmployee(Employee emp)
	{
		
		empRepo.addEmployee(emp);
		
		
		return true;
	}


	public Employee searchEmployee(int id) {
		
		
		return empRepo.searchEmployeeById(id);
		
	}


	public ArrayList<Employee> getAllEmployees() {

		return empRepo.getAllEmployees();
		
		
	}


	public boolean deleteEmployee(int deleteId) {
		
		return empRepo.deleteEmployeeById(deleteId);
		
	}


	public Employee getEmployeeById(int id) {
		return empRepo.getEmployeeById(id);
	}
	
}
