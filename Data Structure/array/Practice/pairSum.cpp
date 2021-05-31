#include <bits/stdc++.h>

using namespace std;



int pairSum(int input[], int size, int x)
{
   unordered_set<int> s;
   int cnt=0;
   for(int i=0; i<size; i++){

    if(input[i]==x){
        cnt++;
    }

    int temp = x- input[i];
    if (s.find(temp) != s.end())
            cnt++;

        s.insert(input[i]);
   }
   
   return cnt;
}


/* Driver Code */
int main()
{
    int A[] = { 9,10,2,8,6,6,11,2,1,8};
    int n = 7;
    int arr_size = sizeof(A) / sizeof(A[0]);

    // Function calling
     // printPairs(A, arr_size, n);
    int a= pairSum(A,arr_size,n);
    cout<<a;
    return 0;
}
