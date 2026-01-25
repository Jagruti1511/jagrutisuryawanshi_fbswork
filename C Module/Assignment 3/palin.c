#include<stdio.h>
void main()
{
	int n=122;
	int rev=0;
	int org=n,rem;	
	 
	
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		 }
		 printf("%d\n",rev);
		 if(org==rev){
		 	printf("palindrom");
		 }
		 else{
		 	printf("not palindrom");
		 }
		 
	}
