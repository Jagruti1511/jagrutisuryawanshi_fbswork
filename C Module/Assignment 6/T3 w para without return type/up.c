#include<stdio.h>
void isCase(char);
void main(){
	char ch='J';
	isCase(ch);
}
void isCase(char ch)
{
	
	if(ch>=65 && ch<=97)
	{
	printf("upper case");
    }
    else
    printf("lower case");
}