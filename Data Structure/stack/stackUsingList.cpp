#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *next;
}*top = NULL;


void push(int x){
	top =new node;
	if(top == NULL){
		top->data = x;
	}else{
		struct *t= new node;
		
		t->data= x;
		t->next=top;
		top= t;
	}
}

int main(){
push(3);
return 0;
}