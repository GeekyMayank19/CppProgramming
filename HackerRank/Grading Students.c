/*
https://www.hackerrank.com/challenges/grading/problem
*/

#include <iostream>

#include<vector>

using namespace std;

int main()
{
    vector<int> marks;
    int n,num,num2,temp;
    cin>>n;
    for(auto i = 0;i<n; i++){
        int a;
        cin>>a;
        marks.push_back(a);
    }
    for(auto i=0;i<n;i++){
      if(marks[i]<38||marks[i]%5==0){

        cout<<marks[i]<<endl;
        continue;
      }else{


          temp=(marks[i]/5)+1;
          num=temp*5;
          num2=num-marks[i];

          if(num2==1){
              marks[i]=marks[i]+1;
              cout<<marks[i]<<endl;
          }

        if(num2==2){
            cout<<marks[i]+2<<endl;

        }
        if(num2==3||num2==4){
            cout<<marks[i]<<endl;
        }
      }



    }
    return 0;
}

