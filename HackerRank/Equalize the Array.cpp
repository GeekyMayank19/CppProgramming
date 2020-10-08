
/******************************************************************************

                           Equalize the Array
https://www.hackerrank.com/challenges/equality-in-a-array/problem
*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{

 int n;
   cin>>n;
  int a[n];
     int freq[101] = {0};

    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
        freq[ a[i] ]++;
    }

// for(int i=1;i<=n;i++){
//     cout<<freq[i]<<" ";
// }
int max=*max_element(freq,freq+101);

cout<<n-max;
    return 0;
}
