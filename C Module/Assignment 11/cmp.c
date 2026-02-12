#include <stdio.h>
char* mystrcmp(char* , char* );
void main(){
	char s1[20];
	char s2[20];
	printf("Enter first string:");
	scanf("%s",s1);
	printf("Enter second string:");
	scanf("%s",s2);
	int res=mystrcmp(s1,s2);
		if(res==0)
		printf("String is equal");
	    else if(res>0)
		printf("first String is greater");
		else
		printf("second String is greater");
	//(mystrcmp(s1,s2)==0)? printf("String is equal"):printf("The String is not Equal");
	
}
char* mystrcmp(char* s1, char* s2){
	int i=0;
	while(s1[i]!='\0' && s2[i]!='\0'){
    if(s1[i]!=s2[i]){
    	s1[i]-s2[i];
    	
	}
		i++;
	}
	return s1[i]-s2[i];
	
} 
