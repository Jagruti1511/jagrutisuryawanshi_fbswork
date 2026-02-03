#include<stdio.h>
int triangle();
void main(){
	int res=triangle();
	if(res==1)
  printf("Equilateral");
  else if(res==2)
  printf("Isosceles");
  else
  printf("scalene");
	
}
 int triangle(){
 int s1,s2,s3;
 printf("Enter the side:");
 scanf("%d%d%d",&s1,&s2,&s3);
  if(s1==s2&&s2==s3&&s1==s3)
  return 1;
  else if(s1==s2||s2==s3||s1==s3)
  return 2;
  else
  return 3;
 }
