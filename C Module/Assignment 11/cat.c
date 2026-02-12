#include<stdio.h>
char* mystrcat(char* , char* );
void main(){
	char s1[20];
	char s2[20];
	printf("Enter first string:");
	scanf("%s",s1);
	printf("Enter second string:");
	scanf("%s",s2);
	mystrcat(s1,s2);
	printf("cat:%s",s1);
}
char *mystrcat(char* s1, char* s2){
	int i=0,j=0;
	while(s1[i]!='\0'){
		
		i++;
	}
	while(s2[j]!='\0'){
	s1[i]=s2[j];
	    i++;
		j++;
	}
	
s1[i]='\0';
}