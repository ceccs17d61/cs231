#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*rear,*front,*newnode,*ptr;
void enqueue();
void dequeue();
void display();
int choice,queue[30];
void main()
{
while(1)
{
printf("enter your choice\n");
printf("1.enqueue\n2.display\n3.delete\n4.exit\n");
scanf("%d",&choice);
switch(choice)
 {
 case 1:enqueue();
 break;
 case 2:display();
 break;
 case 3:dequeue();
 break;
 case 4:exit(0);
 break;
 default:printf("wrong choice\n");
 }
}
}
void enqueue()
{
int a;
printf("enter the element:\n");
scanf("%d",&a);
newnode=(struct node*)malloc(sizeof(struct node*));
newnode->data=a;
if(front==NULL)
{
front=rear=newnode;
front->next=rear->next=NULL;
printf("element is added \n");
}
else
{
rear->next=newnode;
rear=newnode;
rear->next=NULL;
printf("element is added\n");
}
}
void display()
{
ptr=front;
if(ptr==NULL)
{
printf("no elements \n ");
}
else
{
printf("elements are:\n");
 while(ptr!=NULL)
 {
 printf("%d \n",ptr->data);
 ptr=ptr->next;
 }
}
}
void dequeue()
{
ptr=front;
if(front==NULL)
{
printf("no elements\n");
}
else
{
ptr=front;
front=front->next;
free(ptr);
printf("element is deleted\n");
}
}
