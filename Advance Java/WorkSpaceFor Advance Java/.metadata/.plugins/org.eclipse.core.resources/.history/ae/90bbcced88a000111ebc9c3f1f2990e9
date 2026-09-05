package demo;

import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;

import com.fasterxml.jackson.databind.ObjectMapper;

import demo.model.Employee;
import demo.service.EmployeeService;
import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

@WebServlet("/getallemployees")
public class GetEmployeesServlet extends HttpServlet {
	
	EmployeeService empService=new EmployeeService();
	
	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		
		ArrayList<Employee> emplist = empService.getAllEmployees();
		
		System.out.println(emplist);
		
		PrintWriter pw=resp.getWriter();
		
		resp.setContentType("application/json");
		
		ObjectMapper om=new ObjectMapper();
		
		String jsonstring=om.writeValueAsString(emplist);
		
		pw.print(jsonstring);
		
		
	}

}
