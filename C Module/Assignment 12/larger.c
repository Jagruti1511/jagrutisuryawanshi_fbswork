#include<stdio.h>
void main(){
	char s1[20];
	printf("Enter first string:");
	scanf("%s",s1);
	char s2[20];
	printf("Enter second string:");
	scanf("%s",s2);
	 int i=0;
	 int j=0;
	 
	 while(s1[i]!='\0'){
	 	i++;
	 }
	 while(s2[j]!='\0'){
	 	j++;
	 }
	   if(i>j)
	   printf("larger string:%s",s1);
	   else if(j>i)
	   printf("larger string:%s",s2);
	   else
	   printf("both are equal");
		 
	 }
