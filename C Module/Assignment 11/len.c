#include<stdio.h>
char* mystrlen(char* );
void main(){
	char s1[20];
	printf("Enter the string:");
	scanf("%s",s1);
	printf("length is:%d",mystrlen(s1));
}
char* mystrlen(char* s1){
	int i=0;
	while(s1[i]!='\0'){
		i++;
	}
	return i;
}