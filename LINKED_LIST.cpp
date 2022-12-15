#include<stdio.h>
#include<stdlib.h>

//int traversal(struct node* LINK,int INFO,struct node* NEWNODE){
//	printf("%d",NEWNODE->INFO);
//	PTR=PTR->LINK;
//}
int main(){
	struct node{
		int INFO;
		struct node* LINK;
	};
int choice;	
struct node* PTR;
struct node* START;
struct node* NEWNODE;

START=0;
while(choice){
NEWNODE=(struct node*)malloc(sizeof(struct node));
printf("Enter INFO:");
scanf("%d",&NEWNODE->INFO);
//PTR=PTR->LINK;
NEWNODE->LINK=0;
if(START==0){
	START=PTR=NEWNODE;
}
else{
	PTR->LINK=NEWNODE;
	PTR=NEWNODE;
}
printf("do yo want to continue:");
scanf("%d",&choice);
}
PTR=START;
while(PTR!=NULL){
printf("%d",NEWNODE->INFO);
PTR=PTR->LINK;
}
return 0;
}
