#include<stdio.h>
void main()
{
	int a;
	printf("Enter the value");
	scanf("%d",&a);
	
	if(a%3==0 && a!=5){
		printf("a is divisible by 3",a);
		
		if(a%5==0 && a!=3){
			printf("a is divisible by 5",a);
		}
	}
	else {
	     if(a%3==0 && a%5==0){
	    	printf("a is divisible by both",a);
	    	}
		else{
			printf("a is divisible by none",a);
		}	
   }
	
}