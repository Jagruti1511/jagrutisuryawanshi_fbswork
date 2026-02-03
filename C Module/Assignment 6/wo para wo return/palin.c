#include<stdio.h>
void isPalindrome();
void main(){
	isPalindrome();
}
void isPalindrome(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	 
	 if(n/100==n%10)
	 printf("Palindrome");
	 else
	 printf("Not palindrpme");
}