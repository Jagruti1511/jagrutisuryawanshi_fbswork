#include<stdio.h>
void isPalindrome(int);
void main(){
	int n=123;
	 isPalindrome(n);
}
void isPalindrome(int n)
{
	
	int first_number= n%10;
	int last_number=n/100;
	if(first_number==last_number)
	{
		printf("number is palindrome");
	}
	else{
	printf("number is not palindrome");
	}
}