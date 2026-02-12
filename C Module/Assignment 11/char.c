#include<stdio.h>
char* mystrchr(char* ,char );
void main(){
	char str[20]="Firstbit";
//	printf("Enter the string:");
//	scanf("%s",str);
    //char ch;
	char * res=mystrchr(str,'b');
	if(res!=NULL)
	printf("Found at str[%d] index",res-str);
	else
	printf("Not found");
}
char* mystrchr(char* str,char ch){
	int i=0;
	while(str[i]!='\0'){
		if(str[i]==ch)
		return &str[i];
		i++;
	}
	return NULL;
}