#include<bits/stdc++.h>
using namespace std;

//void subarray(int arr[], int n){
  //  int csum=0,max_sum=INT_MIN;
//for(int i=0;i<n;i++){
  //  for(int j=0;j<n;j++){
    //  for(int k=i;k<=j;k++){
     //       cout<<arr[k]<<",";
      //      csum=csum+arr[k];
        //}

          //  if(max_sum<csum){
            //max_sum=csum;
        //}
        //csum=0;
       // cout<<endl;
    //}

//}
//cout<<max_sum;
//}
void subarray(int arr[], int n){
int current_sum=arr[0];
int best_sum=arr[0];
for(int i=1;i<n;i++){
    if((current_sum)>=0){
        current_sum+=arr[i];
    }else{
    current_sum=arr[i];
    }
    if(current_sum>best_sum){
        best_sum=current_sum;
    }
}
cout<<best_sum;
}

int main (){
int arr[] = {1,2,3,4,5};

int n = sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+n);
subarray(arr,n);
}
