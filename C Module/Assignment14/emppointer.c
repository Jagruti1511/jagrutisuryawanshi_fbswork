typedef struct Employee{
	int id;
	char name[20];
	double salary;
}Employee;
Employee store(Employee* );
void display(Employee* );
void main(){
	struct Employee e;
	store(&e);
	display(&e);
}
Employee store(Employee* e){
	printf("****Enter Employee detail:****\n");
	printf("Enter id:");
	scanf("%d",&e->id);
	printf("Enter name:");
	scanf("%s",e->name);
	printf("Enter salary:");
	scanf("%d",&e->salary);
}
void display(Employee* e){
		printf("***Employee detail are: ****\n");
	printf("empid=%d ",e->id);
	printf("empname=%s ",e->name);
	printf("empsalary=%d ",e->salary);
}