// A simple queue program in 'C' using Array.
// Program is written by Nirbhay Kaushik

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 40
// Functions
void insert();
void delete();
void display();
// Queue array
int queue[size];
// Default values of rear and front of queue
int rear=-1;
int front=-1;
void main()
{
	// A local variable for user's choice will use in switch condition
	int user_choice;
	// A infinite loop with some conditions
	while(1)
	{
		printf("\n1. Insert element into queue \n");
		printf("2. Delete element from queue \n");
		printf("3. Display queue \n");
		printf("4. Quit \n");
		printf("--------------------------------\n\n");
		// getting input from the user
		printf("Enter your choice : ");
		scanf("%d",&user_choice);
		printf("\n--------------------------------\n");

		switch(user_choice)
		{
			case 1:
				insert();	// Call insert()
				break;
			case 2:
				delete();	// Call delete()
				break;
			case 3:
				display();	// Call display()
				break;
			case 4:
				exit(1);	// Loop break
				break;
			default:
				printf("Wrong choice \n\n");		
		}
	}
}
// Definition of input()
void insert()
{
	int add_item;
	if(rear==size-1)
	{	printf("Queue overflow \n");
		printf("\n--------------------------------\n");
	}
	else
	{
		if(front==-1)
			front=0;
		printf("\nInsert the element in queue : ");
		scanf("%d",&add_item);
		printf("\n--------------------------------\n");
		rear+=1;
		queue[rear]=add_item;
	}
}
// Definition of delete()
void delete()
{
	if(front==-1||front>rear)
	{
		printf("Queue Underflow \n");
		printf("\n--------------------------------\n");
		return;
	}
	else
	{
		printf("\nElement deleted from queue is : %d",queue[front]);
		printf("\n--------------------------------\n");
		front+=1;
	}
}
// Definition of display()
void display()
{
	int i;
	if(front==-1)
	{	
		printf("Queue is empty \n");
		printf("\n--------------------------------\n");
	}
	else
	{
		printf("\nQueue is : ");
		for(i=front;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
		printf("\n--------------------------------\n");
	}
}
