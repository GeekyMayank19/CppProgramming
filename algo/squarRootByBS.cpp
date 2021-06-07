//find the square root of number usign binary search algo
#include<bits/stdc++.h>
using namespace std;


float squrtRoot(int n){

	int s=0;
	int e=n-1;
	float ans = -1;
	while(s<=e){
		int mid = (s+e)/2;
		if(mid*mid == n ){
			return mid;
		}else if(mid*mid<n){
			ans = mid;
			
			s= mid+1;
		}else {

			e= mid-1;
		}
	}
	return ans;
}



int main(){
int n;
cin>>n;
cout<<squrtRoot(n);
return 0;
}