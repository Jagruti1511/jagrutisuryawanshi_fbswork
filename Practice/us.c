#include<stdio.h>
void main()
{
	int  un,pass;
	printf("Enter correct username and password");
	scanf("%d%d",&un,&pass);
	
	if(un==123){
		if(pass==456)
		printf("login successful");
		else("wrong pass");
	}
	else{
		printf("wrong un ");
	}
}