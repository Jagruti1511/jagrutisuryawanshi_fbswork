typedef struct Employee{
	int id;
	char name[20];
	double salary;
}Employee;
Employee storeEmployee();
void display(Employee e);
void main(){
	struct Employee e;
	e=storeEmployee();
	display( e);
}
Employee storeEmployee(){
	Employee temp;
	printf("Enter id name and salary:");
	scanf("%d%s%d",&temp.id,temp.name,&temp.salary);
	return temp;
	
}
void display(Employee e){
	printf("empid=%d empname=%s empsalary=%d",e.id,e.name,e.salary);
	
}