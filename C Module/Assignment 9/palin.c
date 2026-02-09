#include<stdio.h>
void isPalindrome(int arr[]);
void main(){
	int a[3]={1,2,2};
	 isPalindrome(a);
}
void isPalindrome(int arr[])
{
	
	int first_number= arr[0];
	int last_number=arr[2];
	if(first_number==last_number)
	{
		printf("array is palindrome");
	}
	else{
	printf("array is not palindrome");
	}
}