#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* next;
};

//reverse using vector
void reverseA(node**p){
	vector<int> v;
	int n;
	node*temp=(*p);
	while(temp!=NULL){
		v.push_back(temp->data);
		temp=temp->next;
	}
	
	n=v.size()-1;

	
	node *new_node = new node;
	new_node->data = v[n];
	new_node->next = NULL;
	(*p) = new_node;
	node*last = (*p);
	(*p)=new_node;
	
	for(int i=n-1;i>=0;i--){
		node *t = new node;
		t->data=v[i];
		t->next=NULL;
		last->next=t;
		last=t;

	}

}

//reverse with array or using 3 porinter

void reverseB(node **head){

	node *p=(*head);
	node *q = NULL;
	node *r = NULL;
	while(p!=NULL){

		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	*head=q;
	
}


//display linklist
void display(node * p){
	cout<<"list: ";
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;

}
int main(){
node *head =NULL;
int arr[]={1,2,3,4,5,6};
int n = sizeof(arr)/sizeof(arr[0]);
head=new node;
head->data= arr[0];
head->next= NULL;
node *last=head;
for(int i=1;i<n;i++){
	node *t=new node;
	t->data=arr[i];
	t->next=NULL;
	last->next=t;
    last=t;
}

// reverseA(&head);
reverseB(&head);
display(head);
// cout<<head->data;
return 0;
}