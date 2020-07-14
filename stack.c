#include<stdio.h>
#include<stdlib.h>
#define maxSize 4
int stack[maxSize],top=-1;

int push(int element)
{
  if(top==maxSize-1)
  {
    printf("\nStack overflow ! Could not insert data, Stack in full\n");
  }
  else
  {
    top++;
    stack[top]=element;
    printf("\nElement inserted");
  }
}

int pop()
{
  if(top==-1)
  {
    printf("Stack underflow ! Could not delete the data, Stack is empty\n");
  }
  else
  {
    printf("Deleted : %d",stack[top]);
    top--;
  }
  
}

int display()
{
  if(top==-1)
  {
    printf("\nStack is empty !");
  }
  else
  {
    int i;
    printf("\nStack elements are : \n");
    for(i=top;i>=0;i--)
    {
      printf("%d\n",stack[i]);
    }
  }
}


void main()
{
  int element,choice;
  while(1)
  {
    printf("\n\n----------MENU--------\n");
    printf("1. PUSH\t2. POP\t3. DISPLAY\t4. EXIT\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
      printf("\nEnter the element to be inserted: ");
      scanf("%d",&element);
      push(element);
      break;
    case 2:
      pop();
      break;
    case 3:
      display();
      break;
    case 4:
      exit(0);
    default:
      printf("\nWrong choice, please try again.");
      break;
    }
  }
}
