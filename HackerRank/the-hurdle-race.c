/******************************************************************************
https://www.hackerrank.com/challenges/the-hurdle-race/problem

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n,k;
    int arr[100];
    cin>>n>>k;
    for(auto i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(auto i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }

    if(max>=k){
        cout<<max-k;
    }else{
        cout<<0;
    }
    return 0;
}
