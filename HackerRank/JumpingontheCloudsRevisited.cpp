#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,e=100;
    cin>>n;
    cin>>k;
    int c[n];
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    for(int i=0;i<n/k;i+k){
        if(c[i]==0){
            e=e-1;
        }else{
            e=e-1-2;
        }
    }

    cout<<e;
}
