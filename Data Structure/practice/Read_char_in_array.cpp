#include<bits/stdc++.h>
using namespace std;

int main(){
char a[]={'a','b','c','\0'};
char b[]="hello";
char c[1000];

cout<<a<<endl;
cout<<b<<endl<<sizeof(a)<<sizeof(b)<<endl;

cin.getline(c,1000);
cout<<c;
return 0;
}
