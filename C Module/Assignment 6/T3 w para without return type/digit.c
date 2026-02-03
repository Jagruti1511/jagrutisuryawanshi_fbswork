#include<stdio.h>
void isDigit(int);
void main(){
	int n=958468753;
	isDigit(n);
} 
void isDigit(int n)
{
	
	int start,end,sum;
	end=n%10;
	while(n>=10) {

		n=n/10;
	}

	start=n;
	sum=start+end;
	printf("%d",sum);
}



