struct Student{
	int id;
};
void main(){
	struct Student s1;
	s1.id;
	
	printf("Enter id:");
	scanf("%d",&s1.id);
 printf("Student details are:\n");
 printf("stdid=%d",s1.id);	
}
