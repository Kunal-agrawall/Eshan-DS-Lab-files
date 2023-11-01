#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* next;
};

struct Node* createNode(int data){
	struct Node* newNode= (struct Node*) malloc(sizeof(struct Node));
	if(newNode==NULL){
	printf("Memory Allocation full");
	exit(1); }
	newNode-> data=data;
	newNode-> next=NULL;
	return newNode;
	  }
void InsertAtbeg(struct Node** head, int data){
	struct Node* newNode= createNode(data);
	if(*head==NULL){
	*head = newNode;}
	else{
	newNode->next=*head;
	*head=newNode;   }
	printf("insert val is %d\n" , data);
	}
   void print(struct Node* head){
	   struct Node* temp;
	   temp = head;
	   while(temp != NULL){
	   printf("%d\n",temp->data);
	   temp=temp->next;

	   }
}
void main(){
struct  Node* head= NULL;
clrscr();
 InsertAtbeg(&head , 11);
InsertAtbeg(&head , 21);
print(head);
  getch();

	    }