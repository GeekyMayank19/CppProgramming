#include<bits/stdc++.h>
using namespace std;
int main(){
int n,key;
cin>>n;
cin>>key;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
bool it= binary_search(arr,arr+n, key);
if(it){
	cout<<"present";
}else{
	cout<<"absent!";
}


return 0;
}