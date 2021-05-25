#include<bits/stdc++.h>
using namespace std;

int linearSearch(int *arr, int n, int x){

	for(int i=0;i<n;i++){
		if(arr[i]==x){
			return i;
		}

	}
	return -1;
}

int linearSearch(int a[], int x , int n){

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
		int res = linearSearch(a,x,n);
		cout<<res<<endl;
		t--;
	}

	return 0;
}