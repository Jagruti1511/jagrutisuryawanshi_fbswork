#include<stdio.h>
int isPalindrome(int);
void main(){
	int n=123;
	
	isPalindrome(n)?printf("number is palindrome"):printf("number is not palindrome");
}
 int isPalindrome(int n)
{int first_number= n%10;
	int last_number=n/100;
	
	if(first_number==last_number)
	{
	return 1;
	}
	else{
	return 0;
	}
}