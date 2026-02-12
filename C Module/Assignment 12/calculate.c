#include<stdio.h>
void main(){
	char s1[20];
	printf("Enter the string:");
gets(s1);
	
	int i=0, count=0;
	if(s1[0]!='\0')
		count=1;
	while(s1[i]!='\0'){
	if(s1[i]==' '&& s1[i+1]!=' '&& s1[i+1]!='\0'){
		count++;
	}
	i++;
}
	printf("Total words is:%d",count);
}