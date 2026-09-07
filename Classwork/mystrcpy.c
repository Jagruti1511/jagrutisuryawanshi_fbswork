#include<stdio.h>
 void mystrcpy(char dest[],char src[] );
void main(){
	char source[50],destination[50];
	printf("Enter the string:");
	scanf("%s",source);
	mystrcpy(destination,source);
	printf("copied string:%s",destination);
}
void mystrcpy(char dest[],char src[]){
int i=0;
while(src[i] !='\0')
{
	dest[i]=src[i];
	i++;
	}	
	dest[i]='\0';
}

