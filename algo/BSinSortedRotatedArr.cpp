//serach an element using binary search in sorted rotated array 
#include<bits/stdc++.h>
using namespace std;

int ElementIndex(int arr[] , int n, int key){
	int s=0;
	int e=n-1;
	while(s<=e){
		// cout<<"*";
		int mid = (s+e)/2;
		if(arr[mid]==key){
			return mid;
		}else if(arr[s]<=arr[mid]){
			if(arr[mid]<=key && (key>=arr[s])){
				e= mid -1;
			}
			else{
				s = mid+1;
			}
		}else{
			if(key>=arr[mid] && key<=arr[e]){
				s= mid+1;
			}else{
				e=mid-1;
			}
		}
	}
	return -1;
}

int main(){
	int n,key;
cin>>n;
cin>>key;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
cout<<ElementIndex(arr, n, key);
return 0;
}