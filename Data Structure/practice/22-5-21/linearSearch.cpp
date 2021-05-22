#include<bits/stdc++.h>
using namespace std;

int linerSearch(int a[], int x , int n){

	for(int i=0;i<n;i++){
		if(a[i]==x){
			return i;
		}

	}
	return -1;
}

int main(){
	int t;
	cin>>t;
	
	while(t!=0){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int x;
		cin>>x;
		int res = linerSearch(a,x,n);
		cout<<res<<endl;
		t--;
	}

	return 0;
}