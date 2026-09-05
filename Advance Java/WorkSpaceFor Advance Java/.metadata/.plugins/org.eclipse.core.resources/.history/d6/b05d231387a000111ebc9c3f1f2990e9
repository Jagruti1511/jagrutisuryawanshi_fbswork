package demo.repository;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;

import demo.model.Employee;
import demo.util.DBUtil;

public class EmployeeDBDao implements EmployeeRepository
{
	
	
	 // ADD
    public boolean addEmployee(Employee emp) {

    	try {
    		Connection con=DBUtil.getConnection();
    		
    		String query="insert into employee values(?,?,?);";
    	    	
    		PreparedStatement pstmt= con.prepareStatement(query);
    		
    		
    		pstmt.setInt(1, emp.getId());
    		pstmt.setString(2, emp.getName());
    		pstmt.setDouble(3, emp.getSalary());
    		
    		int res=pstmt.executeUpdate();
    		 
    		return res!=0;
    	
      
    	}catch(SQLException e)
    	{
    		e.printStackTrace();
    	}
    	return false;
    }


    // SEARCH
    public Employee searchEmployeeById(int id) {
    	
    	try {
    	Statement stmt=DBUtil.getConnection().createStatement();
    	
    	ResultSet rs=stmt.executeQuery("Select * from employee where id="+id+";");
    
    	if(rs.next())
    	{
    		Employee emp=new Employee();
    		emp.setId(rs.getInt("id"));
    		emp.setName(rs.getString("name"));
    		emp.setSalary(rs.getDouble("salary"));
    		return emp;
    	}
    	else
    	{
    		return null;
    	}
        

    	}catch(SQLException e)
    	{
    		e.printStackTrace();
    	}
    	return null;
    }


    

  

    // DISPLAY
    public  ArrayList<Employee> getAllEmployees() {
    	ArrayList<Employee> employees = new ArrayList<>();
    	try {
    	Statement stmt = DBUtil.getConnection().createStatement();
    	ResultSet rs=stmt.executeQuery("select * from employee");
    	
    	while(rs.next())
    	{
    		Employee emp=new Employee();
    		emp.setId(rs.getInt("id"));
    		emp.setName(rs.getString("name"));
    		emp.setSalary(rs.getDouble("salary"));
    		
    		employees.add(emp);
    	}
    	}catch(SQLException e)
    	{
    		e.printStackTrace();
    	}
        return employees;
    }


	@Override
	public boolean deleteEmployeeById(int id) {
		
		try {
			
		Connection con=DBUtil.getConnection();
		
		PreparedStatement pstmt= con.prepareStatement("delete from employee where id=?");
		pstmt.setInt(1, id);
		int res=pstmt.executeUpdate();
		
		if(res==0)
			return false;
		else 
			return true;
		}catch(SQLException e)
		{
			e.printStackTrace();
		}
		return false;
	}


	@Override
	public Employee getEmployeeById(int id) {
		
		Employee emp=null;
		
		try {
		Connection con=DBUtil.getConnection();
		PreparedStatement pstmt=con.prepareStatement("select * from employee where id = ?");
		
		pstmt.setInt(1, id);
		
		ResultSet rs=pstmt.executeQuery();
		
		
		
		if(rs.next())
		{
			emp=new Employee();
    		emp.setId(rs.getInt("id"));
    		emp.setName(rs.getString("name"));
    		emp.setSalary(rs.getDouble("salary"));
		}
		}catch(SQLException e)
		{
			e.printStackTrace();
		}
		return emp;
	}


   


	
}