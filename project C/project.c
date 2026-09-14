#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Players{
	int jerseyno;
	char name[20];
	int runs;
	int wickets;
	int matches;
}Players;

Players* createArray();
Players* addPlayer(Players* ,int );
int  deletePlayer(Players* ,int );
int searchPlayer(Players* ,int );
int searchByName(Players* , char[]);
int updatePlayer(Players* ,int ,int );
void sortPlayer(Players* );
void sortByWickets(Players* );         
void top3Runs(Players* );
void top3Wickets(Players* );    
void displayPlayer(Players* );

int size=2,ci=0;
void main(){
	
	Players* arr=createArray();

	while(1){
	printf("\n\nEnter 1 to add Players:\n");
	printf("Enter 2 to delete Players:\n");
	printf("Enter 3 to search Players:\n");
	printf("Enter 4 to update Players:\n");
	printf("Enter 5 to sort Players:\n");
	printf("Enter 6 to display Players:\n");
	printf("Enter 7 to exit...\n");
	
	printf("Enter 8 to search by Name\n");      
	printf("Enter 9 for Top 3 Runs\n");         
	printf("Enter 10 to sort by Wickets\n");    
	printf("Enter 11 for Top 3 Wickets\n"); 
	int choice;
	printf("******Player Management System******\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		int jno;
		printf("Enter Players to add:");
		scanf("%d",&jno);
		arr=addPlayer(arr,jno);
		printf("Player added successfully!!!");
	}
	else if(choice==2)
	{
		int jno;
		printf("Enter jerseyno to delete:");
		scanf("%d",&jno);
		int res=deletePlayer(arr,jno);
		if(res==1)
		{
			printf("Element deletes successfully");
		}
		else
		{
			printf("not deleted");
		}
	}
	else if(choice==3)
{
	int jno;
	printf("Enter jerseyno to search:");
	scanf("%d",&jno);

int index=searchPlayer(arr,jno);

	if(index!=-1)
	{
		printf("Found at index %d\n",index);
	}
	else
	{
		printf("Not found");
	}
}
	else if(choice==8)   
	{
		char name[20];
		printf("Enter name to search:");
		scanf("%s",name);

		int index=searchByName(arr,name);

		if(index!=-1)
			printf("Found at index %d\n",index);
		else
			printf("Not found");
	}
	else if(choice==4)
	{
    	int oldjno,newjno;
    	printf("Enter jerseyno to update:");
    	scanf("%d",&oldjno);
		printf("Enter new Player:");
    	scanf("%d",&newjno);
		int res = updatePlayer(arr,oldjno,newjno);
		if(res==1)
        	printf("Updated successfully");
    	else
        	printf("Player not found");
    }
    	else if(choice==5)
	{
		sortPlayer(arr);
	}
	else if(choice==10)   
	{
		sortByWickets(arr);
	}
	else if(choice==9)   
	{
		top3Runs(arr);
	}
	
	else if(choice==6)
	{
		displayPlayer(arr);
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
	
Players* addPlayer(Players* arr,int jno)
{
	for(int i=0;i<jno;i++){
	
	if(ci>=size)
	{
		size=size*2;
		arr=realloc(arr,sizeof(Players)*size);
		printf("Array full and reallocated\n");
	}
	printf("\nEnter Jersey No: ");
		scanf("%d",&arr[ci].jerseyno);

		printf("Enter Name: ");
		scanf("%s",arr[ci].name);

		printf("Enter Runs: ");
		scanf("%d",&arr[ci].runs);
		printf("Enter Wickets: ");
		scanf("%d",&arr[ci].wickets);

		printf("Enter Matches: ");
		scanf("%d",&arr[ci].matches);
		
	
	ci++;
}
	return arr;
}

int searchPlayer(Players* arr,int jno)
{
	for(int i=0;i<ci;i++)
	{
		if(arr[i].jerseyno==jno)
			return i;
	}
	return -1;
}

int searchByName(Players* arr, char name[])
{
	for(int i=0;i<ci;i++)
	{
		if(strcmp(arr[i].name,name)==0)
			return i;
	}
	return -1;
}

int deletePlayer(Players* arr,int jno)
{
	int index=searchPlayer(arr,jno);
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
int updatePlayer(Players* arr,int jno,int newjno)
{
    int index = searchPlayer(arr,jno);

    if(index != -1)
    {
        arr[index].jerseyno = newjno;
        printf("Enter new Runs: ");
		scanf("%d",&arr[index].runs);

		printf("Enter new Wickets: ");
		scanf("%d",&arr[index].wickets);

		printf("Enter new Matches: ");
		scanf("%d",&arr[index].matches);
        return 1;
    }
    return 0;
}
void sortPlayer(Players* arr)
{
    for(int i=0;i<ci-1;i++)
    {
        for(int j=0;j<ci-1-i;j++)
        {
            if(arr[j].runs > arr[j+1].runs)
            {
                Players temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf(" Sorted successfully");
}
void sortByWickets(Players* arr)
{
    for(int i=0;i<ci-1;i++)
    {
        for(int j=0;j<ci-1-i;j++)
        {
            if(arr[j].wickets > arr[j+1].wickets)
            {
                Players temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted by wickets\n");
}
void top3Runs(Players* arr)
{
    for(int i=0;i<ci-1;i++)
    {
        for(int j=0;j<ci-1-i;j++)
        {
            if(arr[j].runs < arr[j+1].runs)
            {
                Players temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\nTop 3 Players:\n");
    for(int i=0;i<3 && i<ci;i++)
    {
        printf("%s - %d runs\n",arr[i].name,arr[i].runs);
    }
}
void top3Wickets(Players* arr)
{
    for(int i=0;i<ci-1;i++)
    {
        for(int j=0;j<ci-1-i;j++)
        {
            if(arr[j].wickets < arr[j+1].wickets)
            {
                Players temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\nTop 3 Players (Wickets):\n");
    for(int i=0;i<3 && i<ci;i++)
    {
        printf("%s - %d wickets\n",arr[i].name,arr[i].wickets);
    }
}
void displayPlayer(Players* arr)
{
	for(int i=0;i<ci;i++)
	{
		printf("\nJersey:%d",arr[i].jerseyno);
		printf("\nName:%s",arr[i].name);
		printf("\nRuns:%d",arr[i].runs);
		printf("\nWickets:%d",arr[i].wickets);
		printf("\nMatches:%d\n",arr[i].matches);
	}
}

Players* createArray()
{

	Players* arr=(Players*)malloc(sizeof(Players)*size);
	return arr;
}