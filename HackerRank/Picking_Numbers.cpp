/******************************************************************************

https://www.hackerrank.com/challenges/picking-numbers/problem
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],freq[101]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    // for(int i=1;i<=n;i++){
    //     cout<<freq[i]<<" ";
    // }
     int sum=0,max=0,freqmax[n];
   for(int i=1;i<=n;i++){
      sum=freq[i]+freq[i+1];
      freqmax[i]=sum;

   }
    for(int i=1;i<=n;i++){
       if(max<freqmax[i]){
           max=freqmax[i];
       }
    }

  cout<<max;
    return 0;
}
