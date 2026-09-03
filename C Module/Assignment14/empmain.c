struct Employee{
	int id;
	char name[20];
	double salary;
};
void main(){
 	struct Employee e;
	printf("Enter id:");
	scanf("%d",&e.id);
	printf("Enter name:");
	scanf("%s",e.name);
	printf("Enter salary:");
	scanf("%d",&e.salary);
	
	printf("Employee detail are: "\n);
	printf("empid=%d ",e.id);
	printf("empname=%s ",e.name);
	printf("empsalary=%d ",e.salary);
}