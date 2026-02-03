#include<stdio.h>
void isFive();
void main(){
	 isFive();
}
void isFive()
{
	int choice;
	
	while(1){
	
	
	//Menu
	
	printf("\n\t1.To check number is even or odd");
	printf("\n\t1.To check number is prime or not");
	printf("\n\t1.To check number is palindrome or not");
	printf("\n\t1.To check number is positive,negative or zero");
	printf("\n\t1.To revers a number");
	printf("\n\t1.To find sum of digit");
	
	//User input
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	
	
	if(choice==1){
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
		if(num%2==0)
		printf("Even");
	    else
	printf("Odd");
}
 else if(choice==2){
 	int num;
	printf("Enter the number:");
	scanf("%d",&num);
 	int flag=0;
 	for(int i=2;i<num;i++){
 		if(num%i==0){
 			flag==1;
 		break;
		 }
	}
	    if(flag==0)
 		printf("prime");
 		else
 		printf("odd");
	 }
	 
	 else if(choice==3){
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	int temp=num,rev=0;
	while(temp!=0){
	   int rem=temp%10;
	   rev=rev*10+rem;
	   temp=temp/10;
	}
	if(num==rev)
	printf("palindrome");
	else
	printf("not palindrome");
	 	
	 }
	 
	 else if(choice==4){
	 	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num>0){
		printf("positive");}
		else if(num<0)
		printf("Negative");
	else
		printf("Zero");
	 	
	 }
	 
	 else if(choice==5){
	 	int num,rev=0;
	printf("Enter the number:");
	scanf("%d",&num);
		while(num!=0){
	   int rem=num%10;
	   rev=rev*10+rem;
	   num=num/10;
	}
	printf("%d",rev);
	 	
	 }
	 	
	  
	  else if(choice==6){
	  	int num,r,sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	   while(num>0){
	   	r=num%10;
	   	sum=sum+r;
	   	num=num/10;
	   }
	   printf("%d",sum);
	  }
	  else{
	  	printf("\n---INVALID CHOICE!---");
	  }
 }
}

 