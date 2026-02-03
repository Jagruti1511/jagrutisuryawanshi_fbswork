#include<stdio.h>
int isPalindrome(int);
void main(){
	int n=121;
	int rev=isPalindrome(n);
	isPalindrome(n)?printf("palindrome"):printf("not palindrome");
}
int isPalindrome(int n)
{
	
	int rev=0;
	int org=n,rem;	
	 
	
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		 }
		 return rev;
		 
	}
 
 
 