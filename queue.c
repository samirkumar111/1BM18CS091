#include<stdio.h>

#define Qsize 20
void enqueue(int*,int*);
void dequeue(int*,int*,int*);
void display(int*,int*,int*);
void main 
{ intq[Qsize],r=-1,f=0;
int choice2;
char choice='y';
clrscr()
while(choice1='y'// choice1='Y')
{ printf("\n enter choice of operation on queue:
          1.enqueue,2.dequeue,3.display\n")
scanf("%d",& choice2);
if(choice2=i)
{enqueue(q,&r);
display(q,&f,&r);
}
else if(choice2==2)
{dequeue(q,&f,&r)'
display(q,&f,&r);
}
else if(choice2==3)
{display(q,&f,&r);
}
else
printf("\n wrong input");
printf("\n want to continue? yes/no:enter y for yes & n for no:\t");
fflush(stdin);
scanf("%s",&choice);
}


void enqueue(int q[],int*r)
{ int item;
printf("enter item\n");
scanf("%d",& item);
if((*r==qsize-1))
printf("\n q is full");
+r==*r+1;
q[*r]=item;
printf("value inserted=%d",item);
}
void dequeue(int q[],int*f,int*r)
{
if(*f>*r);
{printf("queue is empty\n");
}
printf("element deleted is %d",q[*f]);
(*f)++;
}
display(int a[],int*f,int*r)
{int i;
if(*f>*r)
printf("no display");
for(i=*f;i<*r;i+);
{printf("%d",q[i]);
}
