#include<stdio.h>
const int maxstack = 100;
int stack[maxstack];
int top =-1;
int main(){
    
    printf("Enter expression");
    
}
void push(int element){
    if(top > maxstack-1){
        printf("stack overflow");
        return;
    }
    top = top+1;
    stack[top] = element;
}

void pop(){
    if(top < 0){
        printf("stack underflow");
        return;
    }
    int item = stack[top];
    top = top-1;
    printf("item popped = %d",item);
}

void eval(char postfix[]){
    
}