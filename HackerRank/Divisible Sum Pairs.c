/******************************************************************************

https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
*******************************************************************************/
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n,k,j,count=0;

    cin>>n>>k;
    vector <int long> arr;
    for(auto i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    for(auto i=0;i<n;i++){
        for(j=0;j<n;j++){

            if(i<j){

                if((arr[i]+arr[j])%k==0){
                    count++;
                }
            }
        }
    }
    cout<<count;
    return 0;
}

