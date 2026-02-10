#include<stdio.h>
#include<string.h>
void main(){
	char s1[]="samu";
	char s2[]="samu";
    (strcasecmp(s1,s2)==0)?printf("same"):printf("not same");
}