typedef struct Admin{
	int id;
	char name[20];
	double salary;
	double allowance;
}Admin;
Admin storeAdmin();
void display(Admin a);
void main(){
	struct Admin a;
	a=storeAdmin();
	display(a);
	
	

} 
Admin storeAdmin(){
	Admin temp;
	printf("Enter id: ");
	scanf("%d",&temp.id);
	printf("Enter name: ");
	scanf("%s",temp.name);
	printf("Enter salary: ");
	scanf("%d",&temp.salary);
	printf("Enter allowance: ");
	scanf("%d",&temp.allowance);
	return temp;
}
void display(Admin a){
		printf("Enter Admin details are:\n");
	printf("id=%d name=%s salary=%d allowance=%d",a.id,a.name,a.salary,a.allowance);
}