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
char pop(){
	struct node* t;
	char x;
	if(top==0)
	return 1;
	else{
		t=top;
	top=top->next;
	x=t->data;
	free(t);
	return x;
	}
}
int main(){
	char s[100];
	char r;
	int i=0,l,j=0;
	printf("enter the parenthesis");
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++){
		if(s[i]=='('||s[i]=='['||s[i]=='{'){
			push(s[i]);
		}
		else if(s[i]==')'||s[i]==']'||s[i]=='}'){
			
			r=pop();
			if((int)s[i]==41&&(int)r==40)
			continue;
			else if((int)s[i]==93&&(int)r==91)
			continue;
			else if((int)s[i]==125&&(int)r==123)
			continue;
			else {
			printf("Unbalanced");
			return 0;
			} 	
		}
	}
	if(top!=0)
	printf("unbalanced");
	else
	printf("balanced");
}
