#include<stdio.h>
void main(){
	char s1[20];
	printf("Enter the string:");
	scanf("%s",s1);
	int i=0,count=0;
	while(s1[i]!='\0'){
		if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U'){
		
		count++;
	}
	i++;
	}
	
	printf("vowel %d",count);
}