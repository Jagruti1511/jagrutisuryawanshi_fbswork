#include<stdio.h>
int isPalindrome();
void main(){
	isPalindrome()?printf("Palindrome"):printf("Not palindrpme");
}
int isPalindrome(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	 
	 if(n/100==n%10)
	 return 1;
	 else
	 return 0;
   
   //n/100==n%10? return 1:return 0;
}