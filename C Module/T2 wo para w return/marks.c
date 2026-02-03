#include<stdio.h>
int  grade();
void main(){
	int x=grade();
	if(x==1)
	printf("Distinction");
	else if(x==2)
	printf("First class");
	else if(x==3)
	printf("Second class");
	else if(x==4)
	printf("Pass class");
	else
	printf("fail");
	
}
int grade()
{   
	int marks;
	printf("Enter marks");
	scanf("%d",&marks);
	
	if(marks>75)
	return 1;
	  else if(marks>65)
	  return 2;
	  
	    else if(marks>55)
	    return 3;
	    
	      else if(marks>40 )
	      return 4;
	        
	        else
	        return 5;
}