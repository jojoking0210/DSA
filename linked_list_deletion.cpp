#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *linktraversal(struct node *head)
{
struct node*ptr=(struct node*)malloc(sizeof(struct node));
ptr=head;
while(ptr!=NULL){
	printf("Element:%d\n",ptr->data);
	ptr=ptr->next;
}
return head;
}

struct node *deletefirst(struct node *head)
{
struct node*p=(struct node*)malloc(sizeof(struct node));
p=head;
head=p->next;
free(p);
return head;
}

struct node *deleteatindex(struct node *head,int index)
{
struct node*p=(struct node*)malloc(sizeof(struct node));
struct node*q=(struct node*)malloc(sizeof(struct node));
p=head;
q=p->next;
int i;
for(i=1;i<index-1;i++){
	p=p->next;
	q=q->next;
}
p->next=q->next;
free(q);
return head;
}

struct node *deletelast(struct node *head)
{
struct node*p=(struct node*)malloc(sizeof(struct node));
struct node*q=(struct node*)malloc(sizeof(struct node));
p=head;
q=p->next;
int i;
while(q->next!=NULL){
	p=p->next;
	q=q->next;
}
p->next=NULL;
free(q);
return head;
}

struct node *deletegivenkey(struct node *head,int key)
{
struct node*p=(struct node*)malloc(sizeof(struct node));
struct node*q=(struct node*)malloc(sizeof(struct node));
struct node*r=(struct node*)malloc(sizeof(struct node));
p=head;
q=head->next;

while(q->data!=key && q->next!=NULL){
	p=p->next;
	q=q->next;
}
p->next=q->next;
free(q);
return head;
}


int main(){
struct node	*head=(struct node*)malloc(sizeof(struct node));
struct node	*second=(struct node*)malloc(sizeof(struct node));
struct node	*third=(struct node*)malloc(sizeof(struct node));
struct node	*fourth=(struct node*)malloc(sizeof(struct node));

head->data=8;
head->next=second;

second->data=13;
second->next=third;

third->data=21;
third->next=fourth;

fourth->data=33;
fourth->next=NULL;

printf("list after traversal\n");
head=linktraversal(head);

//printf("list after deleting first entry\n");
//head=deletefirst(head);
//head=linktraversal(head);

/*
printf("list after deleting index value\n");
//index is like 1,2,3,4......
int index;
printf("enter index:\n");
scanf("%d",&index);
head=deleteatindex(head,index);
head=linktraversal(head);
*/

//printf("delete last");
//head=deletelast(head);
//head=linktraversal(head);

printf("after deleting key\n");
head=deletegivenkey(head,21);
head=linktraversal(head);

}
