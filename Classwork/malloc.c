#include<stdio.h>
int size=3,ci=0;
int* createArray(int );
void main(){
//	int size,ci=0;  //current index  yala global kel mhanun main chya baher takla, ani choice madhye he ghyaychi garaj nahi only arr
//	printf("Enter size:");
//	scanf("d",&size);
	
	int* arr= createArray(); //(size) he pass kraychi pn garaj nahi
	while(1){
	
	
	printf("\n\nEnter 1 to add element\n");
	printf("Enter 2 to display array\n");
	printf("Enter 3 to search element\n");
	printf("Enter 4 to update element\n");
	printf("Enter 5 to delete element\n");
	printf("Enter 6 to sort element\n");
	printf("Enter 7 to Exit\n");
	
	int choice;
	scanf("\n%d",&choice);
	if(choice==1){
		int ele;
		scanf("%d",&ele);
	printf("Enter element to add");
	addElement(arr,ele);
	}
	else if(choice==2){
		display(arr);
	}
	else if(choice==3){
			printf("search ho rha hai");
	}
	else if(choice==4){
			printf("update ho rha hai");
	}
	else if(choice==5){
			printf("delete ho rha hai");
	}
	else if(choice==6){
			printf("sort ho rha hai");
		}
	else if(choice==7){
	break;
	}
	
	else{
		printf("Invalid choice");
	}
}
}
void addElement(int* arr,int ele){
	if(ci>=size){
		//printf("Array full");
		size=size*2;
		realloc(arr,sizeof(int)*size);
		//int newsize=size*2;
		realloc(arr,sizeof(int)*newsize)
	}
	arr[ci++]=ele;
}	

display(int* arr){
	for(int i=0;i<ci;i++){
		printf("%d",arr[i]);
	}
}

int* createArray()//(int size)
{
	//int arr[size];
	int* arr=(int*)malloc(sizeof(int)*size);
	return arr;
}