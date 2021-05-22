#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

struct Node {
int data ;
struct Node* next;
}*first = NULL;


//creating link list from array
void create(int A[],int n){
    int i;
    Node *t,*last;
    first = new Node;
    first->data=A[0];
    first->next=nullptr;
    last = first;

    for(i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}



//couting a length of linked list
int count(){
    struct Node *p=first;
    int l=0;
    while(p->next!=NULL){
        p=p->next;
        l++;
    }
    return l;
}



//display
void display(struct Node * p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;

}


//insert at first 
void insertAtFront(int d){
    struct Node *t;
    t=new Node;
    t->data=d;
    t->next=first;
    first=t;
}
//insert at end

void insertAtLast(int d){
    struct Node *t,*p;
    p=first;
    t= new Node;
    t->data=d;
    t->next=NULL;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=t;    
}
// inseting a new node at any position 
void Insert(int index, int x){
    int i;
    struct Node *p=first;
    int l =count();
    struct Node *t;
    if(index < 0 || index > l )
        return;

    t = new Node;
    t->data = x;

    if(index == 0){
        
        t->next = first;
        first = t;
    }
    else{
        for(i=0;i<index-1;i++){
            p=p->next;
        }
        t->next = p->next;
        p->next=t;
    }
}
//check linked list is sorted on not
bool sortedOrNot(){
	Node *p = first;
	int x=INT_MIN;
	while(p->next!=NULL){
	
		if(x>p->data){
			return false;
		}
			x=p->data;
		p=p->next;
	}
	return true;
}

//sort linked list
void sorted(int n){
	Node *p=first;
	int v[n];
	int i=0;
	do
	{
		v[i]=p->data;
		// cout<<p->data<<" ";
		p=p->next;
	}while(p->next!=NULL);

for(auto i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	// cout<<sizeof(v);

	sort(v,v+n);

	

// Node *t,*last;
//     first = new Node;
//     first->data=v[0];
//     first->next=nullptr;
//     last = first;

//     for(int i=1;i<n;i++){
//         t=new Node;
//         t->data=v[i];
//         t->next=NULL;
//         last->next=t;
//         last=t;
//     }

}


int main(){
int A[]={1,2,34,5,3,32};
create(A,6);
int n= sizeof(A)/sizeof(A[0]);
// insertAtFront(97);
// insertAtLast(10);
//insert at any position
// Insert(3,100);
// int l= count();
// cout<<l<<endl;
display(first);
// bool check = sortedOrNot();
// cout<<check<<endl;
sorted(n);
//remove dublicate from linked list

return 0;
}