//https://www.hackerrank.com/challenges/strange-advertising/problem

#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;

	if (n == 1) {
		cout << 2;
	}
	int sum = 2, temp = 2;
	if (n > 1) {
		for (int i = 0; i < n - 1; i++) {
			temp = (temp * 3) / 2;
			sum = sum + temp;

		}
		cout << sum;
	}
	return 0;
}


