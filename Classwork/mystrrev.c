#include<stdio.h>
void mystrrev(int str );
void main(){
	int str[50]
	printf("Enter the string:");
	scanf("%s",str);
	mystrrev(st);
	printf("revers string:%s",destination);
}
void mystrrev(char dest[],char src[]){
int i=0,j;
while(src[i]==0)
{
	
	dest[i]=src[i];
	i++;
	}	
	dest[i]='\0';
}