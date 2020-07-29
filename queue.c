#include<stdio.h>
#include<stdlib.h>
#define maxSize 4
int queue[maxSize],front=-1,rear=-1;

int enQueue(int element)
{
  if(rear==maxSize-1)
  {
    printf("\nQueue Overflow !");
  }
  else
  {
    if(front==-1)
      front=0;
    rear++;
    queue[rear]=element;
    printf("\nInsertion was successful !");
  }
}

void deQueue()
{
  if(front==rear)
  {
    printf("Queue Underflow !");
  }
  else
  {
    printf("\nDeleted element is : %d",queue[front]);
    front++;
    if(front==rear)
      front=rear=-1;
  }
}

void display()
{
  if(rear==-1)
    printf("\nQueue is empty !");
  else
  {
    int i;
    printf("\nQueue elements are : \n");
    for(i=front;i<=rear;i++)
    {
      printf("%d\t",queue[i]);
    }
  }
}

void main()
{
  int element,choice;
  while (1)
  {
    printf("\n\n-------------MENU------------");
    printf("\n1. EnQueue\t 2. DeQueue\t 3. Display\t 4. Exit");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
      printf("\nEnter the element : ");
      scanf("%d",&element);
      enQueue(element);
      break;
    case 2:
      deQueue();
      break;
    case 3:
      display();
      break;
    case 4:
      exit(0);
      break;
    default:
      printf("\nWrong Choice ! Please try again...");
      break;
    }
  }
  
}
