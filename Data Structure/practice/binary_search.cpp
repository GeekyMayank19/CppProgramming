#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int key,int n){

int s=0;
int e=n-1;

while(s<=e){
    int mid=(s+e)/2;
    if(arr[mid]==key){
        return mid;
    }
   else if(arr[mid]>key){
    e= mid-1;
   }
   else{
    s=mid+1;
   }
}
return -1;

}
int main()
{
	int key ;

	int n;
    cout<<"size";
    cin>>n;
   int  arr[n];
    cout<<"elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"enter the key";
    cin>>key;

    int index=binary_search(arr,key,n);
    cout<<index;
	return 0;
}
