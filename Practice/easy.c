#include<stdio.h>
void main()
{
	int a;
	printf("enter the value");
	scanf("%d",&a);
	
	if(a%2==0){
	printf("Even");

	 if(a%4==0)
	 printf("\n divisible by 4");
	  else
	  printf("\n not divisible by 4");
}

   else
   {
   	printf("odd");
   }
}
	