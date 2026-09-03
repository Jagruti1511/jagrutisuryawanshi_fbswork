typedef struct Admin{
	int id;
	char name[20];
	double salary;
	double allowance;
}Admin;
Admin store(Admin* ,int );
void display(Admin* ,int );
void main(){
struct Admin a[3];
	store(a,3);
	display(a,3);
	
	
}
Admin store(Admin* a,int size){
	printf("****Enter Admin detail***\n");
	for(int i=0;i<3;i++){
	printf("Enter id: ");
	scanf("%d",&a[i].id);
	printf("Enter name: ");
	scanf("%s",a[i].name);
	printf("Enter salary: ");
	scanf("%d",&a[i].salary);
	printf("Enter allowance: ");
	scanf("%d",&a[i].allowance);
	}
} 
void display(Admin* a,int size){
	printf("***Display Admin details are***\n");
	for(int i=0;i<3;i++){
			printf("id=%d name=%s salary=%d allowance=%d \n",a[i].id,a[i].name,a[i].salary,a[i].allowance);
	}	
}