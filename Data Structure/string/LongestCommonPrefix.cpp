#include<bits/stdc++.h>
using namespace std;
int main(){
// Initialize 2D array
    char colour[4][10] = { "Blue", "Red", "Orange",
                           "Yellow" };
 
    // Printing Strings stored in 2D array
    for (int i = 0; i < 4; i++){
    	for(int j=0;j<4;j++){
    		cout << colour[i][j] << "\n";
    	}
        
    }
    return 0;
}