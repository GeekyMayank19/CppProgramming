/******************************************************************************

   //https://www.hackerrank.com/challenges/counting valleys/problem
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,count=0,temp=0;
    cin>>n;
    int arr1[n];
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]=='U'){
            temp+=1;

        }else{
            temp-=1;

        }
        arr1[i]=temp;

    }
    for(int i=0;i<n;i++){
        if(arr1[i]==0){
           if(arr1[i-1]<0){
            count++;
           }
        }
        // cout<<arr1[i]<<" ";
    }
        cout<<count;
    return 0;
}
