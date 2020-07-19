/******************************************************************************

               //https://www.hackerrank.com/challenges/sock-merchant/problem
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,count=0,temp=0;
    cin>>n;
    int sock[n];
    int index[101]={0};
    for(int i=0;i<n;i++){
        cin>>sock[i];
        index[sock[i]]++;
    }
    for(int i=1;i<101;i++){
    temp= index[i]/2;
    count+=temp;
    }
    // for(int i=1;i<101;i++){
    //     cout<<index[i]<<" ";
    // }
    cout<<count;

    return 0;
}
