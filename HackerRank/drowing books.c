/******************************************************************************
https://www.hackerrank.com/challenges/drawing-book/problem
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n,p,count=0;
    cin>>n>>p;
     count=min(p/2,n/2-p/2);
    cout<<count;
    return 0;
}
