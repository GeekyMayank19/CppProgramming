#include<bits/stdc++.h>
using namespace std;

class node
{
public:
 int data;
 node *next;	
};

void insertAtEnd(node **head_ref,int d){
	node *new_node = new node;
	new_node->data = d;
	new_node->next = NULL;
	node *last = (*head_ref);

	if((*head_ref)==NULL){
		(*head_ref) = new_node;
		return;
	}
	while(last->next!=NULL){
		last=last->next;
	}

	last->next=new_node;
	return;

}

//deleting node
void deleteNode(node **head_ref,int x){
	node *p = (*head_ref);
	node *q;
	int d;
	while(d!=x && p->next!=NULL){
		q=p;
		p=p->next;
		d=p->data;
	}
	q->next=p->next;
	
}

//find dublicate
void findDublicat(node *p){
	
}

void deleteDublicate(node *p){
	vector<int> v;
	map <int, int> m;
	int dubli = 0;
	int d=0;
	// cout<<"d: ";
	while(p!=NULL){
         d = p->data;
        // cout<<d<<" ";
        v.push_back(d);
        p=p->next;   
    }
	cout<<endl<<"v: ";
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
		m[v[i]]++;
	}
	cout<<endl;
	cout<<"map"<<endl;
	
	for(auto i : m){
		if(i.second!=1){
			cout<<"dublicate: "<<i.first<<endl;
			 dubli=i.first;
		}
		cout<<i.first<<" "<<i.second<<endl;
	}
	vector<int>::iterator it;
	if(dubli!=0){
		it=v.begin()+dubli;
	}
	v.erase(it);
	cout<<"after deleting dublicate list is :"<<endl;
	for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
			
		}
	cout<<endl;
}




void display(node * p){
	cout<<"list: ";
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;

}

int main(){
node *head=NULL;
insertAtEnd(&head,5);
insertAtEnd(&head,1);
insertAtEnd(&head,3);
insertAtEnd(&head,3);
insertAtEnd(&head,2);
insertAtEnd(&head,4);

// deleteNode(&head,3);
deleteDublicate(head);
display(head);
return 0;
}