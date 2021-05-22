#include<bits/stdc++.h>
using namespace std;

insertion_sort(int arr[],int n){

for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
    while((arr[j]>arr[j+1])&& j>=0){
        arr[j+1]=arr[j];
    j--;
    }
    arr[j+1]=temp;
}
}

int main (){
int arr[] = {5,3,2,1,4,8};
int n = sizeof(arr)/sizeof(arr[0]);
insertion_sort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}

