#include<stdio.h>
char* mystrupper(char* );
void main(){
	char s1[20];
	printf("Enter the string:");
	scanf("%s",s1);

	printf("upr is:%s",	mystrupper(s1));
}
char* mystrupper(char* s1){
	int i=0;
	while(s1[i]!='\0'){
		if(s1[i]>='a'&& s1[i]<='z'){
		s1[i]=s1[i]-32;	
		}
		i++;
		
	}
	return s1;
}