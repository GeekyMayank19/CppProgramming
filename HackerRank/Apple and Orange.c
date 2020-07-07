/******************************************************************************
problem url: https://www.hackerrank.com/challenges/apple-and-orange/problem
*******************************************************************************/

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int s,t,a,b,m,n,apple=0,orange=0;
    vector <int> app,org;
    cin>>s>>t>>a>>b>>m>>n;
    for(auto i=0;i<m;i++){
        int arr1;
        cin>>arr1;
        app.push_back(arr1);
        app[i]=app[i]+a;
    }
    for(auto j=0;j<n;j++){
        int arr2;
        cin>>arr2;
        org.push_back(arr2);
        org[j]=org[j]+b;

    }

    for(auto i=0;i<m;i++){
        if(app[i]>=s && app[i]<=t){
            apple++;
        }
    }

    for(auto j=0;j<n;j++){
       if(org[j]>=s && org[j]<=t){
            orange++;
        }
    }
    cout<<apple<<endl;
    cout<<orange;

    return 0;
}
