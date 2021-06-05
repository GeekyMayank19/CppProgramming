#include<bits/stdc++.h>
using namespace std;
int main(){
// Initialize 2D array
    vector<std::string> colour {"Blue", "Red", "Orange"};
 
    // Strings can be added at any time with push_back
    colour.push_back("Yellow");
 
    // Print Strings stored in Vector
    for (int i = 0; i < colour.size(); i++)
        std::cout << colour[i] << "\n";
    return 0;
}