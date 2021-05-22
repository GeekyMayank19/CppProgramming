#include<bits/stdc++.h>
using namespace std;

bool compair(int a,int b){
    return a > b;
}

void bubble_sort(int arr[],int n,bool (&cmp)(int a, int b)){
for(int i=0;i<n;i++){
    for(int j=0;j<=(n-1-i);j++){
        if(cmp(arr[j],arr[j+1])){
            swap(arr[j],arr[j+1]);
        }
    }
}
}

int main (){
int arr[] = {5,3,2,1,4,8};
int n = sizeof(arr)/sizeof(arr[0]);
bubble_sort(arr,n,compair);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
