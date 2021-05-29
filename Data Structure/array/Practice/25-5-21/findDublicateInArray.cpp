#include<bits/stdc++.h>
using namespace std;

int dublicate(int a[],int n);
{
	map<int, int> m;
	for(int i=0;i<n;i++){
		m[a[i]++];
	}

	for(auto i : m){
		if(i.seccond==1){
			return i.first;
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
		int res = dublicate(a,x,n);
		cout<<res<<endl;
		t--;
	}

	return 0;
}