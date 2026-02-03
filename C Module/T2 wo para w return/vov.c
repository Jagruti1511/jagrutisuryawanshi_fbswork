#include<stdio.h>
int  vowOrcon();
void main(){
	vowOrcon()?printf("Vowel"):printf("Consonant");
}
int vowOrcon(){
	char ch;
	printf("Enter the ch:");
	scanf(" %c",&ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	return 1;
	else
	return 0;
}