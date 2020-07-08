/******************************************************************************

*******************************************************************************/
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int y,sum,day;
    int arr[]={31,28,31,30,31,30,31,31};
    cin>>y;
    if(y<1919){
        if(y%4==0){
          arr[1]=29;
          for(auto i=0;i<8;i++){
              sum+=arr[i];

          }
         day=256-sum;
         cout<<day<<".09."<<y;
        }
        else{

          for(auto i=0;i<8;i++){
              sum+=arr[i];

          }
         day=256-sum;
         cout<<day<<".09."<<y;
        }

    }else{
        if(((y % 4 == 0) && (y % 100 != 0)) ||
             (y % 400 == 0)){
                   arr[1]=29;
          for(auto i=0;i<8;i++){
              sum+=arr[i];

          }
         day=256-sum;
         cout<<day<<".09."<<y;
             }
             else{
                    for(auto i=0;i<8;i++){
              sum+=arr[i];

          }
         day=256-sum;
         cout<<day<<".09."<<y;
        }
             }
    }
    return 0;
}
