#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={3,4,5,2,35};
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;}
