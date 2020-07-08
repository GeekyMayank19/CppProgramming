/******************************************************************************
https://www.hackerrank.com/challenges/bon-appetit/problem
*******************************************************************************/
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n,k,bill,Abill,sum=0,temp;
    vector <int> arr;
    cin>>n>>k;
    for(auto i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
        sum+=arr[i];
    }
    cin>>bill;
    Abill=(sum-arr[k])/2;
    if(Abill==bill){
        cout<<"Bon Appetit";
    }else{
        cout<<bill-Abill;
    }

    return 0;
}
