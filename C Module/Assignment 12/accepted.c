#include<stdio.h>

void main(){
	char s1[20];
	printf("Enter the string:");
	scanf("%s",s1);
	char s2;
	printf("Scan single char:");
	scanf(" %c",&s2) ;
	//for(int i=0;s1[i]!='\0';i++){
	int i=0;
	int found=0;
	while(s1[i]!='\0'){
	
		if(s1[i]==s2){
			printf("found at position:%d",i+1);
			found=1;
		}
		i++;
}
	if(found==0)
	printf("not found");
		
}