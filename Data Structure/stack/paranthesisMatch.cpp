#include<bits/stdc++.h>
using namespace std;

class Node{
public:
 	int size ;
	int top = -1;
	char *arr;
};

void push(Node *st,char x){
	if(st->top == st->size-1){
		return;
	}
	st->top++;
	st->arr[st->top]=x;
}

char pop(Node *st){
	char x='\0';
	if(st->top==-1){
		cout<<"underflow";
	}else{
		x=st->arr[st->top];
		st->top--;

	}
	return x;
}

void display(Node *st){
	for(int i=st->top;i>0;i--){
		cout<<st->arr[st->top];
	}
}

bool isEmpty(Node *st){
	if(st->top==-1){
		return true;
	}
	return false;
}

bool isMatch( string str){
	Node st;
	// cin>>st.size;
	st.size=str.length();
	char a[st.size];
	st.arr=a;

	for(int i=0;i<str.size();i++){
		if(str[i]=='('){
			push(&st,str[i]);
		}else if(str[i]==')'){
			if(isEmpty(&st)){
				return false;
			}
			pop(&st);
		}
	}
	return isEmpty(&st) ? true: false;
}

int main(){
string s;
s="((a+b)*c-d))";
if(isMatch(s))
	cout<<"true";
else
	cout<<"false";


return 0;
}