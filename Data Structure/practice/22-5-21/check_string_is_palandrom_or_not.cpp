#include<bits/stdc++.h>
using namespace std;
bool is_palandrom(char str)
{

    int i=0;
    int j = strlen(str)-1;
    while(i<j){
        if(str[i]==str[j]){
            i++;
            j--;

        }
        else{
            return true;
        }

    }
    return false;
}
 int main(){
 char str[1000];
 cin.getline(str,1000);
 if(is_palandrom){
    cout<<"palandrom";
 }
 else{
    cout<<"Not palandrom";
 }
 }
