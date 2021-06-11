#include<bits/stdc++.h>
using namespace std;


class Node{
public:
	char data;
	Node *next;
};

class Stack{

	
public:
	Node *top;
	Stack(){
		top = NULL;
	};
	void push(char x);
	char pop();
	void display();
};

void Stack::push(char x){
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
char Stack::pop(){
	char x= -1;
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

int isOperand(char x){
	if(x=='+'||x=='-'||x=='*'||x=='/')
		return 0;
	else
		return 1;
}

int pre(char x){
	if(x=='+'||x=='-')
		return 1;
	if(x=='*'|| x=='/')
		return 2;
	return 0;
}

string intopost(string infix){
	Stack stk;
	stk.push('#');
	int i=0,j=0;
	char arr[infix.size()+1];
	for(int k=0;i<infix.size();k++){
		arr[k]=infix[k];
	}
	arr[infix.size()]='\0';
	string postfix;
	while(arr[i]!='\0'){
		if(isOperand(arr[i])){
			postfix.push_back(arr[i]);
			i++;
			cout<<stk.top->data;
		}
		else{
			if(pre(arr[i])>pre(stk.top->data)){
				stk.push(arr[i]);
			}else{
				postfix.push_back(stk.pop());
			}
		}
	}
	while(stk.top!=NULL){
		postfix.push_back(stk.pop());
	}
return arr;
}

int main(){
	// cout<<"hi";
	string infix="a+b*c";
	string postfix;
	// cout<<infix[0];
	cout<<intopost(infix);
	cout<<postfix;
	// cout<<"Hi";
	return 0;
}