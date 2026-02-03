#include<stdio.h>
void isTriangle(int,int,int);
void main(){
	int s1,s2,s3;
	printf("Enter the values:");
	scanf("%d%d%d",&s1,&s2,&s3);
	
	 isTriangle(s1,s2,s3);
}
void isTriangle(int s1,int s2,int s3)
{
	
	if(s1==s2 && s1==s3 && s2==s3)
	printf("Equilateral");
	else if(s1==s2 || s1==s3 || s2==s3)
	printf("Isosceles");
	else
	printf("scalene");
}