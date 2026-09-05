package demo;

import java.io.IOException;
import java.io.PrintWriter;

import com.fasterxml.jackson.databind.ObjectMapper;

import demo.model.Employee;
import demo.service.EmployeeService;
import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

@WebServlet("/getemployeebyid")
public class SearchEmployeeByIdServlet extends HttpServlet{
	
	EmployeeService employeeService=new EmployeeService();

	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		
		PrintWriter pw=resp.getWriter();
		
		int id=Integer.parseInt(req.getParameter("id"));
		
		Employee emp=employeeService.getEmployeeById(id);
		
		if(emp==null)
			pw.print("Employee not found");
		else
		{
			ObjectMapper om=new ObjectMapper();
			String empjson=om.writeValueAsString(emp);
			
			pw.print(empjson);
		}
			
		
	}

}
