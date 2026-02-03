#include<stdio.h>
double calculateSalary();
void main(){
	double total= calculateSalary();
	printf("%lf",total);
}
double calculateSalary()
{
    double bs=4000;
    double da,ta,hra,ts;
	if(bs<=5000)
	{
		da=bs*0.10;
		ta=bs*0.20;
	    hra=bs*0.25;
	    
	}
	else{
		da=bs*0.15;
		ta=bs*0.25;
		hra=bs*0.30;
	}
	ts=da+ta+hra+bs;
	return ts;
}