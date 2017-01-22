//stack implementation using array

#include <iostream>
#define TRUE 0
#define FALSE -1
using namespace std;


class my_stack{
int stack[100];
int top;

public: my_stack(){
    top = -1;
}

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
        *is_empty=true;
        return -1;
    }
    else{
        *is_empty = false;
        return stack[top--];
    }    
}

int peek(bool *is_empty){
    if(top==-1){
        *is_empty=true;
        return -1;
    }
    else{
        *is_empty = false;
        return stack[top];
    }
}
};

int main() {
	my_stack *a = new my_stack;
	int val = 10;
	bool is_pushed = a->push(val);
	if(is_pushed){
	    cout<<"Successfully pushed:"<<val<<endl;
	}
	
	bool *is_peek = new bool;
	int peek_val = a->peek(is_peek);
	if(is_peek){
	    cout<<"Stack top:"<<peek_val<<endl;
	}
	else{
	    cout<<"Stack Empty"<<endl;
	}
	
	bool *is_pop = new bool;
	int x = a->pop(is_pop);
	if(*is_pop){
	    cout<<"Popped value:"<<x<<endl;
	}
	else{
	    cout<<"Stack Empty"<<endl;
	}
	return 0;
}
