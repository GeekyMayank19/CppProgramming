/******************************************************************************
https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
*******************************************************************************/
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n,max=0,low=0,lowcount=0,highcount=0;
    cin>>n;
    vector <int> scor;
    vector <int> HigScor;
    vector <int> LowScor;
    for(auto i=0;i<n;i++){
        int a;
        cin>>a;
        scor.push_back(a);
    }
     max=scor[0];
     low=scor[0];
    for(auto i=0;i<n;i++){
        if(max<scor[i]){
            max=scor[i];
            highcount++;
        }
        if(low>scor[i]){
            low=scor[i];
            lowcount++;
        }

        LowScor.push_back(low);
        HigScor.push_back(max);

    }
    // for(auto i=0;i<n;i++){
    //     cout<<HigScor[i]<<" ";
    // }
    // cout<<endl;
    // for(auto i=0;i<n;i++){
    //     cout<<LowScor[i]<<" ";
    // }
    cout<<highcount<<" "<<lowcount;
    return 0;
}
