#include<stdio.h>
typedef struct Student{
	int rollno;
	char name[20];
	int marks;
}Student;

void store(Student s[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter rollno:");
	scanf("%d",&s[i].rollno);
	printf("Enter name:");
	scanf("%s",s[i].name);
	printf("Enter marks:");
	scanf("%d",&s[i].marks);
	}
}

void display(Student s[],int size)
{
	for(int i=0;i<size;i++)
	{
	printf("Students details are:\n");
	 printf("stdid=%d ",s[i].rollno);
	 printf("stdname=%s ",s[i].name);
	 printf("stdmarks=%d ",s[i].marks);
	}
}
void main(){
   int size=2;
   struct Student s[size];
   store(s,size);
   display(s,size);
}