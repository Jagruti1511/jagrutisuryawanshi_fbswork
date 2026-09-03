#include<stdio.h>
void main()
//{
//	int n=122;
//	int rev=0;
//	int org=n,rem;	
//	 
//	
//	while(n!=0){
//		rem=n%10;
//		rev=rev*10+rem;
//		n=n/10;
//		 }
//		 printf("%d\n",rev);
//		 if(org==rev){
//		 	printf("palindrom");
//		 }
//		 else{
//		 	printf("not palindrom");
//		 }
//		 
//	}
 
 
 {
 	int n;
 	printf("Enter the number:");
 	scanf("%d",&n);
 	int rev=0;
	int org=n,rem;
	for(;n!=0;n=n/10){
	rem=n%10;
		rev=rev*10+rem;
	
		 }
		 printf("%d\n",rev);
		 if(org==rev){
		 	printf("palindrome");
		 }
		 else{
		 	printf("not palindrome");
		 }
		 
	}	
	
 