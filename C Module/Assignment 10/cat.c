#include<stdio.h>
#include<string.h>
void main(){
	char s1[20]="Hello";
	char s2[20]="World";
	strcat(s2,s1);
	printf("%s",s2);
}