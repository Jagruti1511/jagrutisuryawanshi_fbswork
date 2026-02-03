#include<stdio.h>
void isDigit();
void main(){
	isDigit();
} 
void isDigit()
{
	int n=958468753;
	int start,end,sum;
	end=n%10;
	while(n>=10) {

		n=n/10;
	}

	start=n;
	sum=start+end;
	printf("%d",sum);
}



