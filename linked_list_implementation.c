#include<stdio.h>
#include<stdlib.h>
void main()
{
struct node
{
int data;
struct node *next;
};
struct node* head=0;
struct node* newnode, *temp;
int choice=1;
while(choice)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the data ");
scanf("%d",&(*newnode).data);
if(head==0)
{
head=newnode;
temp=newnode;}
else
{
(*temp).next=newnode;
temp=newnode;
}
printf("do you want to enter more elements(1 for yes and 0 for no) ");
scanf("%d",&choice);
}
(*temp).next=0;
temp=head;
while(temp!=0)
{
printf("%d ",(*temp).data);
temp=(*temp).next;
}


}
