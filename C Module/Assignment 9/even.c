#include<stdio.h>
void evenOdd(int a[]);
void main(){
	int a[1]={5};
	evenOdd(a);
}
void evenOdd(int a[])
{
	
	if(a[0]%2==0){
		printf("even");
	}
	else{
		printf("odd");
	}
}