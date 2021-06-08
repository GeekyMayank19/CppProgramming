/*  C++ code to generate all possible subarrays/subArrays
    Complexity- O(n^3) */
#include<bits/stdc++.h>
using namespace std;
 
//using ckadane's algo
 int  subArr(int arr[],int n){
    int csum=arr[0];
    int bsum=arr[0];
    for(int i=0;i<n;i++){
        if(csum>0){
            bsum = csum+ arr[i];
        }else{
            csum=arr[i];
        }

        if(csum>bsum){
            bsum=csum;
        }
    }
    return bsum;
 }

void subArray(int arr[], int n)
{

    for (int i=0; i <n; i++)
    {
        
        for (int j=i; j<n; j++)
        {
           
            for (int k=i; k<=j; k++)
                cout << arr[k] << " ";
 
            cout << endl;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "All Non-empty Subarrays\n";
    subArray(arr, n);
   cout<<subArr(arr,n);
    return 0;
}