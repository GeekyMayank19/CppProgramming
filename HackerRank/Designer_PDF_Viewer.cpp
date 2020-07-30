    // https://www.hackerrank.com/challenges/designer-pdf-viewer/problem

#include<bits/stdc++.h>
using namespace std;
int main(){
    int value[26];
    string str;
    for(int i=0;i<26;i++){
        cin>>value[i];
    }
    cin>>str;
    int l=str.length();
    int max=0;

    for(int i=0;i<l;i++){
        char c=str[i];
        int temp=int(c);
        temp=temp-97;

        if(max<value[temp]){
            max=value[temp];
        }
    }
    cout<<max*l;
    return 0;
}

