#include<stdio.h>
typedef struct Student
{
	int rollNo;
	char name[30];
	int marks;
	
}Student;
void store(Student*,int );
void display(Student* ,int );
void main()
{
	Student s[5];
	store(s,5);
	display(s,5);
}
void store(Student* s,int size)
{
	printf("********Enter Student Details**********\n");
	for(int i=0;i<size;i++)
	{
		printf("Enter rollNo :");
		scanf("%d",&s[i].rollNo);
		printf("Enter name :");
		scanf("%s",s[i].name);
		printf("Enter marks :");
		scanf("%d",&s[i].marks);
	}
}
void display(Student* s,int size)
{
	printf("********Display Student Details*******\n");
	printf("RollNo  Name   Marks\n");
	for(int i=0;i<size;i++)
	{
		printf("%d\t%s\t%d\n",s[i].rollNo,s[i].name,s[i].marks);
	}
	
}