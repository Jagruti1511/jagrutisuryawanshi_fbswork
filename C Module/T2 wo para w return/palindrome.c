#include<stdio.h>
int isPalindrome();
void main(){
	int isPalindrome();
	isPalindrome()?printf("palindrome"):printf("not palindrome");
    
}
    
    int isPalindrome()	
	
{

	int n=123;
	int rev=0;
	int org=n,rem;	
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		 }
		 return org==rev;
		 	
}	

 
 
 