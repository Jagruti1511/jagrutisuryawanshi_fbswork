#include<stdio.h>
void main(){
	char s1[20];
	printf("Enter the string:");
	scanf("%s",s1);
	int i=0;
	while(s1[i]!='\0'){
		if(s1[i]=='a'){
		
		s1[i]='$';
	}
	i++;
	}
	
	printf("chack:%s",s1);
}