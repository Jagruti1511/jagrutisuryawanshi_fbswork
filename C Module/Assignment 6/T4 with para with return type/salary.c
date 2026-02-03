#include<stdio.h>
double isSalary(double);
void main(){
	double ts;
	
	isSalary(ts);
}
double isSalary(double ts)
{
    double bs=6000;
    double da,ta,hra;
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
	printf("%lf",ts);
}