typedef struct Employee{
	int id;
	char name[20];
	double salary;
}Employee;
Employee store(Employee* ,int);
void display(Employee* ,int );
void main(){
	struct Employee e[5];
	store(e,5);
	display(e,5);
	
}

Employee store(Employee* e,int size){
	printf("*****Enter Employee Details*****\n");
	for(int i=0;i<size;i++){
	printf("Enter id:");
	scanf("%d",&e[i].id);
	printf("Enter name:");
	scanf("%s",e[i].name);
	printf("Enter salary:");
	scanf("%d",&e[i].salary);
	}
}
void display(Employee* e,int size){
	printf("****Display the Details****\n");
	for(int i=0;i<size;i++){
	printf("empid=%d ",e[i].id);
	printf("empname=%s ",e[i].name);
	printf("empsalary=%d ",e[i].salary);
	}
}

