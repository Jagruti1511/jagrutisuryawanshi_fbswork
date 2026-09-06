#include<stdio.h>
typedef struct Student
{
	int rollNo;
	char name[30];
	int marks;
	
}Student;
void store(Student* );
void display(Student* );
void main()
{
	Student s;
	store(&s);
	display(&s);
}
void store(Student* s)
{
	printf("********Enter Student Details**********\n");
	
		printf("Enter rollNo :");
		scanf("%d",&s->rollNo);
		printf("Enter name :");
		scanf("%s",s->name);
		printf("Enter marks :");
		scanf("%d",&s->marks);
	
}
void display(Student* s)
{
	printf("********Display Student Details*******\n");
	printf("RollNo  Name   Marks\n");
	
		printf("%d\t%s\t%d\n",s->rollNo,s->name,s->marks);	
}