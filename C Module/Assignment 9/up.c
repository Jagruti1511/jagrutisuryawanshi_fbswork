#include<stdio.h>
void isCase(char a[]);
void main(){
	char a[1]={'j'};
	isCase(a);
}
void isCase(char a[])
{
	
	if(a[0]>=65 && a[0]<=97)
	{
	printf("upper case");
    }
    else
    printf("lower case");
}