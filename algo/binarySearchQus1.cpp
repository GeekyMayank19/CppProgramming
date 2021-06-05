#include<bits/stdc++.h>
using namespace std;

int left_occurrence(int arr[],int n, int key){
	int s=0;
	int e=n-1;
	int ans=-1;
	while(s<=e){
		int mid = (s+e)/2;
		if(arr[mid]==key){
			e = mid -1;
			ans=mid;
		}
		else if(arr[mid]>key){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return ans;

}
int right_occurrence(int arr[],int n, int key){
	int s=0;
	int e=n-1;
	int ans=-1;
	while(s<=e){
		int mid = (s+e)/2;
		if(arr[mid]==key){
			s= mid+1;
			ans=mid;
		}
		else if(arr[mid]>key){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return ans;

}


int main(){
int n,key;
cin>>n;
cin>>key;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
int left= left_occurrence(arr,n, key);
int right = right_occurrence(arr, n, key);
cout<<"left "<<left<<endl<<"right "<<right;
return 0;
}