#include<stdio.h>
#include<string.h>
void main(){
	char s1[]="samriddhi";
	printf("first:%s\n",strchr(s1,'i')); //find first occurrence
	printf("last:%s",strrchr(s1,'i')); //find last occurance
}