#include <bits/stdc++.h>
using namespace std;

long long sumOdd (long long n){
	long long terms = (n+1)/ 2;
	long long sum = terms * terms;///tổng số lẻ n số =(n/2) mũ 2
	return sum;
}

long long sumInrage (long long l, long long r){
	return sumOdd(r) - sumOdd(l-1);
}

int main (){
	int t;
	cin >> t;
	while (t--){
		long long l,r;
		cin >> l >> r;
		cout << sumInrage(l,r) << endl;
	}
	return 0;
}