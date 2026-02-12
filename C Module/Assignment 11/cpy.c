#include<stdio.h> 
//char* mystrcpy(char* ,char* );
//void main(){
//	char s1[20];
//	char s2[20];
//	printf("Enter the string:");
//	scanf("%s",s1);
//	mystrcpy(s2,s1);
//	printf("copies string is:%s",s2);
// 
//}
//char* mystrcpy(char* s1,char* s2){
//	int i=0;
//	while(s2[i]!='\0'){
//		s1[i]=s2[i];
//		i++;
//	}
//	s1[i]='\0';
//	return s1;
	
	
	//ncpy
	
	char* mystrncpy(char* ,char*,int );
void main(){
	
	char s1[20];
	char s2[20];
	printf("Enter the string:");
	scanf("%s",s1);

	printf("copies string is:%s",mystrncpy(s2,s1,3));
 
}
char* mystrncpy(char* s1,char* s2,int n){
	int i=0;
	while(i<n && s2[i]!='\0') {
		s1[i]=s2[i];
		i++;
	}
	s1[i]='\0';
	return s1;
}