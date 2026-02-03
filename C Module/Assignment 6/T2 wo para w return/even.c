#include<stdio.h>
int evenOdd();
void main(){
	evenOdd()?printf("Even"):printf("Odd");
}
int evenOdd(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	//n%2==0?return 1:return 0;
	 if(n%2==0)
	 return 1;
	 else
	 return 0;
}