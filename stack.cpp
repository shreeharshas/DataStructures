#include <iostream>
#define TRUE 0
#define FALSE -1
using namespace std;


class mystack{
int stack[100];
int top =-1;

bool push(int n){
    top++;
    if(top==100){
        return false;
    }
    else{
        stack[top] = n;
        return true;
    }
}

int pop(bool *is_empty){
    if(top==-1){
        is_empty=true;
        return -1;
    }
    else{
        is_empty = false;
        return this.stack[this.top--];
    }    
}

int peek(bool *is_empty){
    if(top==-1){
        is_empty==true;
        return -1;
    }
    else{
        is_empty = false;
        return stack[top];
    }
}
} my_stack;
int main() {
	my_stack a = new my_stack();
	a.push(10);
	printf("Stack top:%d", a.peek());
	a.pop();
	return 0;
}
