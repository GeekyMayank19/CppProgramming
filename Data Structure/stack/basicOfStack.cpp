#include<bits/stdc++.h>
using namespace std;

struct Stack{
	int size;
	int top;
	int *arr;
};

void create(struct Stack *st){
	cout<<"enter size of stack"<<endl;
	cin>>st->size;
	st->top=-1;
	st->arr = (int *)malloc(st->size*sizeof(int));
	
}

void display(struct Stack *st){
	for(int i=st->top;i>=0;i--){
		cout<<st->arr[i]<<endl;
	}
}
void push(struct Stack *st,int x){

	if(st->top==st->size-1){
		cout<<"overFlow";
	}else{
		st->top++;
		st->arr[st->top]=x;
	}

}
int pop(struct Stack *st){
	int x=-1;
	if(st->top==-1){
		cout<<"under Flow";
	}else{
		x =st->arr[st->top--];
	}
	return x;
}

bool isEmpty(struct Stack *st){
	if(st->top==-1){
		return true;
	}
	return false;
}

bool isFull(struct Stack *st){
	if(st->top==st->size-1){
		return true;
	}
	return false;
}

int peek(struct Stack *st,int pos){
	int x=-1;
	if(st->top-pos +1){
		cout<<"invalid position";
	}
	else{
		return st->arr[st->top - pos +1];
	}
	return x;
}

int main(){
struct Stack st;
create(&st);
push(&st, 10);
push(&st, 20);
push(&st, 30);
push(&st, 40);
display(&st);
cout<<"after pop"<<endl;
pop(&st);
display(&st);
return 0;
}