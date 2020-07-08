
#include <iostream>
#include<vector>
using namespace std;

int main()
{
  int n,frq,count=0,num=0;
  vector <int> arr,type;
  cin>>n;
  for(auto i=0;i<n;i++){
      int a;
      cin>>a;
      arr.push_back(a);
  }
  for(auto i=0;i<n;i++){
       num=arr[i];

      for(auto j=1;j<n;j++){
          if(num==arr[j]){
              count++;
          }
      }
      type[i]=count;
      count=0;
  }
  for(auto i=0;i<n;i++){
      cout<<type[i]<<" ";
  }
    return 0;
}
