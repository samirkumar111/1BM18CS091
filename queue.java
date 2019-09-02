#include <stdio.h>
#define max 10
int queue[max];
int front=-1,rear=-1;
void insert(void);
int  dequeue(void);
void display(void);
int main()
{
	int option;
	int ele;
	do
	{
		printf("\n\n *****main menu *****");
		printf("\n 1.insert an element");
		printf("\n 2.delete an element");
		printf("\n 3.display the queue");
		printf("\n 4.exit");
		printf("\n enter the option");
		scanf("%d",&option);
		switch(option)
		{
			case 1:insert();
			break;
			case 2:
			      ele=dequeue();
				  if(ele!=-1)
					  printf("\n the number deleted is:%d",&ele);
					  break;
			case 3:
                   display();
			       break;
		}
	}while(option !=5);
	return 0;
}
   void insert()
   {
	   int num;
	   printf("\n enter the number to be inserted in the queue:");
	   scanf("%d",&num);
	   if(rear==max-1)
		   printf("\n overflow");
		   else if(front==-1&&rear== -1)
			   front=rear=0;
			   else
				   rear++;
				   queue[rear]=num;
   }
   int dequeue()
   {
	   int ele;
	   if(front==-1 || front>rear)
	   {
		   printf("\n underflow");
		   return -1;
	   }
	   else
	   {
		   ele=queue[front];
		   front++;
		   if(front>rear)
			   front=rear=-1;
			   return ele;
	   }
   }
	     void display()
		 {
			 int i;
			 printf("\n");
			 if(front==-1 || front>rear)
				 printf("\n QUEUE IS EMPTY");
				 else
				 {
					 for(i=front;i<=rear;i++)
						 printf("\t %d",queue[i]);
				 }
		 }
