#include<stdio.h>
char* mystrncat(char* , char* ,int);
void main(){
	char s1[20];
	char s2[20];
	int n;
	printf("Enter first string:");
	scanf("%s",s1);
	printf("Enter second string:");
	scanf("%s",s2);
	printf("Enter Number of character:");
	scanf("%d",&n);
	mystrncat(s1,s2,n);
	printf("cat:%s",s1);
}
char *mystrncat(char* s1, char* s2,int n){
	int i=0,j=0;
	while(s1[i]!='\0'){
		
		i++;
	}
	while(s2[j]!='\0' && j<n){
	s1[i]=s2[j];
	    i++;
		j++;
	}
	
s1[i]='\0';
return s1;
}