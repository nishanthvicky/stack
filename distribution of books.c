#include<stdio.h>
struct node{
    char s[101];
    struct node* next;
};
struct node *temp,*top=0,*newnode;
void push(){
    newnode=(struct node*)malloc(sizeof(struct node));
    fgets(newnode->s,101,stdin);
    newnode->next=top;
    top=newnode;
}
void pop(){
    top=top->next;
    top=top->next;
}
void display(){
    	printf("%s",top->s);
}
int main()
{
int i;
l1:scanf("%d",&i);
if(i==1)
push();
else if(i==-1)
pop();
else if(i==2)
display();
else if(i==0)
return 0;
goto l1;
}
