#include<bits/stdc++.h>
using namespace std;



int main(){
    int arr[1000];

    int n;
	int key;
	cin>>n;
	cin>>key;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

    sort(arr,arr+n);
    int i=0,j=n-1;
while(i<j){
    if(arr[i]+arr[j]<key){
        i++;
    }else if(arr[i]+arr[j]>key){
     j--;
    }
    if(arr[i]+arr[j]==key){
      cout<<arr[i]<<" and "<<arr[j]<<endl;
    }
i++;
j--;
}


    return 0;
}

