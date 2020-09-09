//https://www.hackerrank.com/challenges/camelcase/problem
#include <bits/stdc++.h>

using namespace std;

// driver code
int main()
{
    // assigning value to string s
    string s;

   int count=1;
    getline(cin, s);
    int n = s.length();

    // declaring character array
    char char_array[n + 1];

    // copying the contents of the
    // string to char array
    strcpy(char_array, s.c_str());

    for (int i = 0; i < n; i++)
        {
            char ch=char_array[i];
            if((ch>='A')&&(ch<='Z')){
                count++;
            }

        }
  cout<<count;
    return 0;
}
