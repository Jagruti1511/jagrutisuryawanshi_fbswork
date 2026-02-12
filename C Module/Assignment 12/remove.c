#include<stdio.h>
void main(){
	char s1[20];
	printf("Enter the string:");
	scanf("%s",s1);
	 int i=0;
	 int n;
	 printf("Enter index to remove:");
	scanf("%d",&n);
	 
	 
	 while(i<n){
	 	i++;
	 }
	 while(s1[i]!='\0'){
	 	s1[i]=s1[i+1];
	 	i++;
	 }
	 	printf("Modified string: %s",s1);
	 	
	 
	 
	 
}