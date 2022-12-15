#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node linkedlisttraversal(struct node* NEW){
while(NEW!=0){
	printf("\nElement %d",NEW->data);
	NEW=NEW->next;
}
}
struct node *insertatbeginning(struct node *head, int data){
	struct node *NEW;
	NEW=(struct node*)malloc(sizeof(struct node));
	NEW->next=head;
	NEW->data=data;
	return NEW;
}
//traverse first till that index
struct node*insertatindex(struct node *head,int data,int index)
{
	struct node *NEW=(struct node*)malloc(sizeof(struct node));
	
	struct node *p=head;
	int i=0;
	while(i!=index-1){
		p=p->next;
		i++;
	}
	NEW->data=data;
	NEW->next=p->next;
	p->next=NEW;
	return p;
}

struct node* insertatend(struct node *head,int data){
	struct node *NEW;
	NEW=(struct node*)malloc(sizeof(struct node));
	struct node *p=head;
	
	while(p->next!=NULL){
		p=p->next;
	}
	NEW->data=data;
	NEW->next=NULL;
	p->next=NEW;
	return head;
}
//node given no traversal require
struct node *insertafternode(struct node* head,struct node *prevnode,int data){
	struct node *NEW;
	NEW=(struct node*)malloc(sizeof(struct node));
	
	NEW->next=prevnode->next;
	prevnode->next=NEW;
	NEW->data=data;
return head;

}
int main(){   
	struct node *head;//pointer
	struct node *first;//node
	struct node *second;//node
	
	head=(struct node*)malloc(sizeof(struct node));
	first=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	
	head->data=7;
	head->next=first;
	
	first->data=11;
	first->next=second;
	
	second->data=14;
	second->next=NULL;
	
	printf("%d %d %d %d",head->data,head->next,first->data,second->data);
	linkedlisttraversal(head);
    
//	printf("\ninsert at beginning");
//	head=insertatbeginning(head,56);	
//	linkedlisttraversal(head);
//	
//	printf("\ninsert at index");
//	head=insertatindex(head,76,1);
//	linkedlisttraversal(head);
//	
//    printf("\ninsert at end");
//head=insertatend(head,44);
//	linkedlisttraversal(head);
	
	printf("\ninsert after a node");
	head=insertafternode(head,second,99);
		linkedlisttraversal(head);
}
