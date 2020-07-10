/******************************************************************************
https://www.hackerrank.com/challenges/cats-and-a-mouse/problem

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,z,a,b;
        cin>>x>>y>>z;
        a=z-x;
        b=z-y;
        if(a<0){
            a=-a;
        }
        if(b<0){
            b=-b;
        }

        if(a==b){
            cout<<"Mouse C"<<endl;
        }
        if(a<b){
            cout<<"Cat A"<<endl;
        }
        if(a>b){
            cout<<"Cat B"<<endl;
        }
    }
    return 0;
}
