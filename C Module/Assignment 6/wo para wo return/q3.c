#include<stdio.h>
void isThree();
void main(){
	 isThree();
}
void isThree()
{
   int range;
   printf("Enter the value:");
   scanf("%d",&range);
   for(int i=1;i<=range;i++){
   	int sum=0;
   	for(int j=1;j<i;j++){
   		if(i%j==0)
   		sum=sum+j;
	   }
	   if(sum==i)
	   printf("\n%d",i);
   }	
}