/******************************************************************************
drowing book
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n,p,count=0;
    cin>>n>>p;

    if(p<=n/2){


    for(int i=0;i<p;i++){
     count++;
    }

    }
     if(p>n/2){


    for(int i=n;i>p;i--){
     count++;
    }

    }
    // if(n%2!=0){
    //     count++;
    //     }
    cout<<count/2;
    return 0;
}
