#include<bits/stdc++.h>
using namespace std;


class Node{
public:
	int data;
	Node *next;
};

class Stack{
private:
	Node *top;
public:
	Stack(){
		top = NULL;
	};
	void push(int x);
	int pop();
	void display();
};

void Stack::push(int x){
	if(top==NULL){
		top = new Node;
		top->data=x;
		top->next=NULL;
	}else{
		Node *t = new Node;
		t->data = x;
		t->next = top;
		top = t;
	}
}
int Stack::pop(){
	int x= -1;
	if(top == NULL){
		cout<<"Stack underflow";
	}else{
		Node *p=top;
		top=top->next;
		x=p->data;
	}
	return x;
}

void Stack:: display(){
	Node *p = top;
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
}


int main(){
	Stack stk;
	stk.push(10);
	stk.push(20);
	stk.push(30);
	stk.display();
	stk.pop();
	cout<<endl;
	stk.display();
return 0;
}