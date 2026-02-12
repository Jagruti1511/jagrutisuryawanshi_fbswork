#include <stdio.h>
char* mystrcasecmp(char* , char* );
void main(){
	char s1[20];
	char s2[20];
	printf("Enter first string:");
	scanf("%s",s1);
	printf("Enter second string:");
	scanf("%s",s2);
	int res=mystrcasecmp(s1,s2);
		if(res==0)
		printf("String is equal");
	    else if(res>0)
		printf("first String is greater");
		else
		printf("second String is greater");
	
	
}
char* mystrcasecmp(char* s1, char* s2){
	int i=0;
	char c1,c2;
	while(s1[i]!='\0' && s2[i]!='\0'){
   c1=s1[i];
   c2=s2[i];
   if(c1>='A' && c1<='Z')
   c1=c1+32;
   if(c2>='A' && c2<='Z')
   c2=c2+32;
   if(c1!=c2)
   return c1-c2;
		i++;
	}
	return s1[i]-s2[i];
	
} 
