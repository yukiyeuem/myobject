#include <bits/stdc++.h>
using namespace std;

long long sumNumber (long long n){
	long long sum = (n*(n+1)) / 2;
	return sum;
}

long long sumInRange (long long l, long long r){
	return sumNumber(r) - sumNumber(l-1);
}

int main (){
	int t;
	cin >> t;
	while (t--){
		long long l,r;
		cin >> l >> r;
		cout << sumInRange(l,r) << endl;
	}
	return 0;
}