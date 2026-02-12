#include<stdio.h>
void main(){
	char s1[20];
	printf("Enter the string:");
	gets(s1);
	int i=0;
	
	while(s1[i]!='\0'){
		if(s1[i]==' '){
		
		s1[i]='@';
	}
	i++;
	}
	printf("String replace:%s",s1);
}