#include<stdio.h>
void isTriangle(int a[],int b[],int c[]);
void main(){
	int a[1],b[1],c[1];
	printf("Enter the values:");
	scanf("%d%d%d",&a[0],&b[0],&c[0]);
	
	 isTriangle(a,b,c);
}
void isTriangle(int a[],int b[],int c[])
{
	
	if(a[0]==b[0] && a[0]==c[0] && b[0]==c[0])
	printf("Equilateral");
	else if(a[0]==b[0] || a[0]==c[0] || b[0]==c[0])
	printf("Isosceles");
	else
	printf("scalene");
}