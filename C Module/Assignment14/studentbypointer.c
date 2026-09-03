#include<stdio.h>
typedef struct Student{
	int rollno;
	char name[20];
	int marks;
}Student;
void store(Student* s)
{
	printf("Enter rollno:");
	scanf("%d",&s->rollno);
	printf("Enter name:");
	scanf("%s",s->name);
	printf("Enter marks:");
	scanf("%d",&s->marks);
}

void display(Student* s)
{
	printf("Students details are:\n");
	 printf("stdid=%d ",s->rollno);
	 printf("stdname=%s ",s->name);
	 printf("stdmarks=%d ",s->marks);
}
void main(){
   struct Student s;
   store(&s);
   display(&s);
}