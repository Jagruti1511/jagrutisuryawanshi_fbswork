#include<stdio.h>
void vowOrcon();
void main(){
	vowOrcon();
}
void vowOrcon(){
	char ch;
	printf("Enter the ch:");
	scanf(" %c",&ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	printf("Vowel");
	else
	printf("Consonant");
}