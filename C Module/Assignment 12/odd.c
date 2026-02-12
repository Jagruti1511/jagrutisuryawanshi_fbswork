#include<stdio.h>
void main(){
	char s1[20];
	printf("Enter the string:");
	scanf("%s",s1);
	 
	 int i=0;
	 //for(i=0;s1[i]!='\0';i+=2)
	 while(s1[i]!='\0'){
	 	printf("%c",s1[i]);
	 	i=i+2;
	 }
	 
}