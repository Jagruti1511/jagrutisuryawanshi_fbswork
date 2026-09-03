#include<stdio.h>
struct Student{
	int rollno;
	char name[20];
	int marks;
};
void main(){
   struct Student s;
	printf("Enter rollno:");
	scanf("%d",&s.rollno);
	printf("Enter name:");
	scanf("%s",s.name);
	printf("Enter marks:");
	scanf("%d",&s.marks);
	
	printf("Students details are:\n");
	 printf("stdid=%d ",s.rollno);
	 printf("stdname=%s ",s.name);
	 printf("stdmarks=%d ",s.marks);
}