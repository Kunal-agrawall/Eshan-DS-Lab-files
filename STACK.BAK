#include <stdio.h>
#include <conio.h>
#define size 100
struct stack{
int data[5];
int top;
};
void intialize(struct stack *s){
    s->top=-1;
 }
int isEmpty(struct stack *s) {
if(s->top== -1)
return 1;
else
return 0;
 }

int isFull(struct stack *s) {
if(s-> top== size -1)
return 1;
else
return 0;  }

void push(struct stack *s, int val){
if(isFull(s)){
printf("overflow");
return ;}

s-> data[++s->top]=val;
}
int pop(struct stack *s) {
if(isEmpty(s)){
printf("underflow");
return 1;
}
return s-> data[s->top--];
}

void main(){

struct stack mystack;
clrscr();
intialize(&mystack);
push(&mystack,10);
push(&mystack,20);

while(! isEmpty(&mystack)){
printf("%d,",pop(&mystack));
}

getch();
}


