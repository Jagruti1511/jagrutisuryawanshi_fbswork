package demo;

import java.io.IOException;
import java.io.PrintWriter;

import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

@WebServlet("/login")
public class LoginServlet extends HttpServlet {

	
	
	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		
		String username = req.getParameter("username");
		String password= req.getParameter("password");
		PrintWriter pw = resp.getWriter();
		
		if(username.equals("firstbit") && password.equals("12345"))
			pw.print("login successfull");
		else
			pw.print("Invalid Username or Password");
		
		
		
		
	}
	
	

	@Override
	protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		String username = req.getParameter("username");
		String password= req.getParameter("password");
		PrintWriter pw = resp.getWriter();
		
		if(username.equals("firstbit") && password.equals("12345"))
			pw.print("login successfull");
		else
			pw.print("Invalid Username or Password");
	}

}
