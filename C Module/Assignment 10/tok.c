#include<stdio.h>
#include<string.h>
void main(){
	char s1[]="J A S";
	printf("%s",strtok(s1," "));
	printf("%s",strtok(NULL," "));
	printf("%s",strtok(NULL," "));
}