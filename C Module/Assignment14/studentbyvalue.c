typedef struct Student{
	int rollno;
	char name[20];
	int marks;
}Student;
Student storeStudent();
display(Student s);
void main(){
	Student s;
	s=storeStudent();
	display(s);
}
Student storeStudent(){
	Student temp;
	printf("Enter rollno,name and marks:");
	scanf("%d%s%d",&temp.rollno,temp.name,&temp.marks);
	return temp;
}
display(Student s){
	printf("rollno=%d name=%s marks=%d\n",s.rollno,s.name,s.marks);
}