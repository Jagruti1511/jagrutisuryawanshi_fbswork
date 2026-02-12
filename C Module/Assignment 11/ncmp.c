#include <stdio.h>
char* mystrncmp(char* , char* ,int );
void main(){
	char s1[20];
	char s2[20];
	printf("Enter first string:");
	scanf("%s",s1);
	printf("Enter second string:");
	scanf("%s",s2);
	int n;
	printf("Enter number of characters to compare:");
	scanf("%d",&n);
	int res=mystrncmp(s1,s2,n);
		if(res==0)
		printf("String is equal");
	    else if(res<0)
		printf("first String is smaller");
		else
		printf("second String is greater");
	//(mystrcmp(s1,s2)==0)? printf("String is equal"):printf("The String is not Equal");
	
}
char* mystrncmp(char* s1, char* s2,int n){
	int i=0;
	while(i<n && s1[i]!='\0' && s2[i]!='\0'){
    if(s1[i]!=s2[i]){
    	return s1[i]-s2[i];
    	
	}
		i++;
	}
	return s1[i]-s2[i];
	
} 
