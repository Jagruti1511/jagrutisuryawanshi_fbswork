#include<stdio.h>
void main(){
	char s1[20];
	printf("Enter the string:");
	scanf("%s",s1);
	char temp[20];
	strcpy(temp,s1);
	strrev(s1);
	int res=strcmp(temp,s1);
	if(res==0)
	printf("Palindrome");
	else
	printf("Not Palindrome");
}