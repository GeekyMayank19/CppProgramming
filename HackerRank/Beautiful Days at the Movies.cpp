// https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem
#include <iostream>
#include<string>

using namespace std;
int reversDigits(int num)
{
    int rev_num = 0;
    while(num > 0)
    {
        rev_num = rev_num*10 + num%10;
        num = num/10;
    }
    return rev_num;
}


int main()
{
    int i,j,k,count=0;
    int rev_num = 0;

    cin>>i>>j>>k;
    for(int a=i;a<=j;a++){
        int rev=reversDigits(a);
        if((a-rev)%k==0){
            count++;
        }
    }
    cout<<count;
    return 0;
}

