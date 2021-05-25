// find and return that number which is unique in the array/list
#include<bits/stdc++.h>
using namespace std;
///using xor in cpp 
int findUnique1(int *a, int n){
	int xo=0;
	for(int i =0;i<n;i++){
		xo^=a[i];
	}
	return xo;
}
////using array frequency
// void findUnique2(int *a, int n,int size){
	
// 	int arr[size]={-1};
// 	for(int i=1;i<=size;i++){
// 		arr[a[i]]++;
// 	}
// 	// for (int i = 1; i <=size; i++)
// 	// {
// 	// 	cout<<arr[i]<<" ";
// 	// 	// if(arr[i]==1){
// 	// 	// 	cout<<a[i];
// 	// 	// }
// 	// }
// }



////using map 
int findUnique3(int a[],int n){
	map<int, int> m;

	for(int i= 0;i<n;i++){
		m[a[i]]++;
	}

	for(auto i : m){
		// cout<<i.first<<" "<<i.second<<endl;
		if(i.second == 1){
			return i.first;
		}
	}
	return -1;
}

//using sorting 
int findUnique4(int a[],int n){
	sort(a,a+n);
	int j=0;
	for(int i=1;i<n;i+2){
		j=i-1;
		if(a[j]!=a[i]){
			return j;
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
		
		// int res = findUnique1(a,n);
		
		int *size = max_element(a, a + n);
		int s=*size;
		// findUnique2(a,n,s);
		int res=findUnique3(a,n);
		cout<<res<<endl;
		t--;
	}

	return 0;
}