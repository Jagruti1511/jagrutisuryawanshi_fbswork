#include<stdio.h>
#include<stdlib.h>
int* createArray();
void storeHardCoded(int*);
int* addElement(int*,int);
void disElement(int*);
int searchElement(int*,int );
int deleteElement(int*,int);
int updateElement(int*,int,int);
void sortElement(int*);
int size=10,ci=0;
void main()
{
	int* arr=createArray();
	storeHardCoded(arr);
	while(1){
	printf("\n\nEnter 1 to add element:\n");
	printf("Enter 2 to display element:\n");
	printf("Enter 3 to search element:\n");
	printf("Enter 4 to update element:\n");
	printf("Enter 5 to delete element:\n");
	printf("Enter 6 to sort element:\n");
	printf("Enter 7 to exit...\n");
	
	int choice;
	scanf("%d",&choice);
	if(choice==1)
	{
		int ele;
		printf("Enter element to add:");
		scanf("%d",&ele);
		arr=addElement(arr,ele);
	}
	else if(choice==2)
	{
		disElement(arr);
	}
	else if(choice==3)
	{
			int ele;
		printf("Enter element to search:");
		scanf("%d",&ele);
		int index=searchElement(arr,ele);
		if(index!=-1)
		{
			printf("Found");
		}
		else
		{
			printf("Not found");
		}
	}
	else if(choice==4)
	{
    	int oldEle,newEle;
    	printf("Enter element to update:");
    	scanf("%d",&oldEle);
		printf("Enter new element:");
    	scanf("%d",&newEle);
		int res = updateElement(arr,oldEle,newEle);
		if(res==1)
        	printf("Updated successfully");
    	else
        	printf("Element not found");
    }
	else if(choice==5)
	{
		int ele;
		printf("Enter element to delete:");
		scanf("%d",&ele);
		int res=deleteElement(arr,ele);
		if(res==1)
		{
			printf("Element deletes successfully");
		}
		else
		{
			printf("not deleted");
		}
	}
	else if(choice==6)
	{
		sortElement(arr);
	}
	else if(choice==7)
	{
		break;
	}
	else
	{
		printf("Invalid choice....");
	}
}
free(arr);
}

void storeHardCoded(int* arr)
{
	arr[ci++]=10;
	arr[ci++]=20;
	arr[ci++]=30;
	arr[ci++]=40;
	arr[ci++]=50;
	arr[ci++]=60;
	arr[ci++]=70;
	arr[ci++]=80;
}
int* addElement(int* arr,int ele)
{
	if(ci>=size)
	{
		size=size*2;
		arr=realloc(arr,sizeof(int)*size);
		printf("Array full and reallocated\n");
	}
	arr[ci++]=ele;
	return arr;
}
void disElement(int* arr)
{
	for(int i=0;i<ci;i++)
	{
		printf("%d ",arr[i]);
	}
}
int searchElement(int* arr,int ele)
{
	for(int i=0;i<ci;i++)
	{
		if(arr[i]==ele)
			return i;
	}
	return -1;
}
int deleteElement(int* arr,int ele)
{
	int index=searchElement(arr,ele);
	if(index!=-1)
	{
		for(int i=index;i<ci-1;i++)
		{
			arr[i]=arr[i+1];
		}
		ci--;
		return 1;
	}
	return 0;
}
int updateElement(int* arr,int oldEle,int newEle)
{
    int index = searchElement(arr,oldEle);

    if(index != -1)
    {
        arr[index] = newEle;
        return 1;
    }
    return 0;
}
void sortElement(int* arr)
{
    for(int i=0;i<ci-1;i++)
    {
        for(int j=0;j<ci-1-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Array sorted successfully");
}


int* createArray()
{
//	int arr[size];
	int* arr=(int*)malloc(sizeof(int)*size);
	return arr;
}