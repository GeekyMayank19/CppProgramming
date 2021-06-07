#include<bits/stdc++.h>
using namespace std;

//kadane's algo 
int kadane(int arr[],int n){
	int i=0;
	int current_best=arr[0];
	int over_all_best=arr[0];
	for(i=1;i<n;i++){
		if(current_best>=0){
			current_best=current_best+arr[i];
		}else{
			current_best=arr[i];
		}
		if(over_all_best<current_best){
			over_all_best=current_best;
		}
	}
	return over_all_best;
}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
cout<<kadane(arr,n);
return 0;
}