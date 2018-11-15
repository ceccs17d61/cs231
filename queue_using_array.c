#include<stdio.h>
#include<stdlib.h>
int l,rear=-1,front=-1,d,queue[50];
void main()
{
int choice;
printf("enter an array limit\n");
scanf("%d",&l);
void enqueue();
void dequeue();
void display();
do
{
printf("1.enqueue\n2.dequeue\n3.display\n4.exit\n");
scanf("%d",&choice);
 switch(choice)
 {
 case 1:enqueue();
 break;
 case 2:dequeue();
 break;
 case 3:display();
 break;
 case 4:exit(0);
 break;
 default:printf("wrong choice\n");
 }
}
while(choice<=4 && choice!=0);
}
void enqueue()
{
if(rear==l-1)
{
printf("queue is full\n");
}
else
{
 if(rear==-1 && front==-1)
 {
 front=0;
 rear=0;
 }
 else
 {
 rear=rear+1;
 }
printf("enter the item\n");
scanf("%d",&queue[rear]);
printf("element is inserted\n");
}
}
void display()
{
int i;
if((front==-1)||(front>rear))
{
printf("Queue is empty\n");
}
else
{
printf("the elements are:\n");
 for(i=front;i<=rear;i++)
 {
 printf("%d \n",queue[i]);
 }
}
}
void dequeue()
{
if(front==-1 || front>rear)
{
printf("empty queue\n");
}
else
{
d=queue[front];
front=front+1;
printf("the deleted element is :%d \n",d);
}
}
