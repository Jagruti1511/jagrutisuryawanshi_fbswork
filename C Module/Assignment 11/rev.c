#include<stdio.h>
#include<string.h>
char* mystrrev(char* );
void main(){
	char s1[20];
	printf("Enter the string:");
	scanf("%s",s1);
	mystrrev(s1);
	printf("revers is:%s",s1);
}
char* mystrrev(char* s1){
	int i=0;
	int r=strlen(s1)-1;
	while(i<r){
	char temp=s1[i];
	s1[i]=s1[r];
	s1[r]=temp;
	i++;
	r--;
	}
	
	return s1;
}