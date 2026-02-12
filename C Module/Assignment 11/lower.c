#include<stdio.h>
char* mystrlower(char* );
void main(){
	char s1[20];
	printf("Enter the string:");
	scanf("%s",s1);

	printf("lwr is:%s",	mystrlower(s1));
}
char* mystrlower(char* s1){
	int i=0;
	while(s1[i]!='\0'){
		if(s1[i]>='A'&& s1[i]<='Z'){
		s1[i]=s1[i]+32;	
		}
		i++;
		
	}
	return s1;
}