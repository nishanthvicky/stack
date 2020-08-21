#include<stdio.h>
struct node{
	int data;
	struct node* next;
};
struct node *top=0,*newnode;
void push(int x){
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=top;
	top=newnode;
}
void pop(){
	if(top==0)
	printf("stack is empty");
	else
	top=top->next;
}
int peek(struct node* temp){
	if(temp==0)
	printf("empty stack");
	else{
		printf("%d",temp->data);
	}
}
void display(struct node* temp){
	while(temp!=0){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	
}
int main(){
	push(1);
	push(2);
	pop();
	pop();
	push(3);
	display(top);
	peek(top);
}
