#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                int c=j-i;
                b[i]=c;
            }
        }
    }
    int max=*min_element(b,b+n);
    cout<<max;
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}
