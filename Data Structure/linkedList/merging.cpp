#include<bits/stdc++.h>
using namespace std;

class node {
public:
	int data;
	node *next;
};

//creating link list from array
node* create(int A[],int n){
    int i;
    node *t,*last,*first;
    first = new node;
    first->data=A[0];
    first->next=nullptr;
    last = first;

    for(i=1;i<n;i++){
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    return first;
}


int main(){
	// node *first;
	// first = new node;
	int A[]={10,2,34,5,3,32};
	node*head=create(A,6);
	
	cout<<head->data;


	return 0;
}