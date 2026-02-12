#include<stdio.h>
#include<stdio.h>
void main(){
	char s1[20];
	printf("Enter the string:");
	scanf("%s",s1);
	int i=1;
	int len;
	int n=strlen(s1);
	
	if(n<=2){
			printf("String to short:");
		}
	while(i< n-1){
		printf(" %c",s1[i]);
		i++;
	}
		
		
	
	}