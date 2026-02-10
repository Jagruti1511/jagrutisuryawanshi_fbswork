#include<stdio.h>
#include<string.h>
void main(){
	char s1[20]="jagruti";
	char s2[20]="Avinash";
	char s3[20]="Suryawanshi";
	strncpy(s2,s3,15);
	printf("%s",s2);
}