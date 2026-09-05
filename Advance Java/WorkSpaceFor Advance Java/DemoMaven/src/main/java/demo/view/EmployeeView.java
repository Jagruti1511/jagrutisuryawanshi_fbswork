package demo.view;

import java.util.ArrayList;
import java.util.Scanner;

import demo.model.Employee;
import demo.service.EmployeeService;

public class EmployeeView {
	
	public static void showView()
	{
		
		EmployeeService empService=new EmployeeService();
		 Scanner sc = new Scanner(System.in);

	        int choice;

	        do {

	            System.out.println("\n===== Employee Management =====");
	            System.out.println("1. Add Employee");
	            System.out.println("2. Search Employee");
	            System.out.println("3. Update Employee");
	            System.out.println("4. Delete Employee");
	            System.out.println("5. Display Employees");
	            System.out.println("6. Sort Employees");
	            System.out.println("7. Exit");

	            System.out.print("Enter choice: ");
	            choice = sc.nextInt();

	            switch (choice) {

	                case 1:

	                    System.out.print("Enter ID: ");
	                    int id = sc.nextInt();

	                    sc.nextLine();

	                    System.out.print("Enter Name: ");
	                    String name = sc.nextLine();

	                    System.out.print("Enter Salary: ");
	                    double salary = sc.nextDouble();

	                    Employee emp=new Employee(id,name,salary);
	                    
	                    empService.addEmployee(emp);

	                    break;


	                case 2:

	                    System.out.print("Enter ID to search: ");
	                    int searchId = sc.nextInt();

	                    emp=empService.searchEmployee(searchId);
	                    if(emp==null)
	                    	System.out.println("Not found");
	                    else
	                    	System.out.println(emp);

	                    break;


	                case 3:

//	                    System.out.print("Enter ID to update: ");
//	                    int updateId = sc.nextInt();
//
//	                    sc.nextLine();
//
//	                    System.out.print("Enter New Name: ");
//	                    String newName = sc.nextLine();
//
//	                    System.out.print("Enter New Salary: ");
//	                    double newSalary = sc.nextDouble();
//
//	                    EmployeeDao. updateEmployee(updateId, newName, newSalary);

	                    break;


	                case 4:

	                    System.out.print("Enter ID to delete: ");
	                    int deleteId = sc.nextInt();

	                    boolean res=empService.deleteEmployee(deleteId);
	                    if(res==true)
	                    	System.out.println("Deleted successfully");
	                    else
	                    	System.out.println("Id not found");
	                    break;


	                case 5:

	                    ArrayList<Employee> employees = empService.getAllEmployees();

	                    for(Employee e : employees)
	                        System.out.println(e);

	                    break;


	                case 6:

//	                	EmployeeDao.sortEmployees();

	                    break;


	                case 7:

	                    System.out.println("Program Ended.");
	                    break;


	                default:

	                    System.out.println("Invalid Choice!");

	            }

	        } while (choice != 7);

	        sc.close();
	    }



}
