#include<stdio.h>
char* mystrrchr(char* ,char );
void main(){
	char str[50];
	printf("Enter the string:");
	scanf("%s",str);
    char ch;
    printf("Enter character to search:");
    scanf(" %c",&ch);
	char * res=mystrrchr(str,ch);
	if(res!=NULL){
	
	printf("  found ",res - str+1);
}
	else{
	
	printf("Not found");
}
}
char* mystrrchr(char* str,char ch){
	int i=0;
	char *last=NULL;
	while(str[i]!='\0'){
		if(str[i]==ch){
		
		last= &str[i];
	}
		i++;
	}
	return last;
}