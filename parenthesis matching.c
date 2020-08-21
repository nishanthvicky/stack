#include<stdio.h>
#include<string.h>
struct node{
	char data;
	struct node* next;
};
struct node *top=0,*newnode;
void push(char x){
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=top;
	top=newnode;
}
int pop(){
	struct node* t;
	if(top==0)
	return 1;
	else{
		t=top;
	top=top->next;
	free(t);
	return 0;
	}
}
int main(){
	char s[10];
	int i=0,l,r;
	printf("enter the parenthesis");
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++){
		if(s[i]=='('){
			push(s[i]);
		}
		else if(s[i]==')'){
			r=pop();
			if(r==1){
			printf("Parenthesis unbalanced");
			return 0;
		}
	}
	}
	if(top==0)
	printf("balanced");
	else
	printf("unbalanced");
}
