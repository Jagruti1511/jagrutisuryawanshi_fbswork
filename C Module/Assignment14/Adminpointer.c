typedef struct Admin{
	int id;
	char name[20];
	double salary;
	double allowance;
}Admin;
Admin store(Admin* );
void display(Admin* );
void main(){
	struct Admin a;
	store(&a);
	display(&a);
	
	

} 
Admin store(Admin* a){
	printf("Enter id: ");
	scanf("%d",&a->id);
	printf("Enter name: ");
	scanf("%s",a->name);
	printf("Enter salary: ");
	scanf("%d",&a->salary);
	printf("Enter allowance: ");
	scanf("%d",&a->allowance);
}
void display(Admin* a){
		printf("Enter Admin details are:\n");
	printf("id=%d name=%s salary=%d allowance=%d",a->id,a->name,a->salary,a->allowance);
}