/*
 	TASK : Propaganda
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
	if(n==1) return 0;
	if(n==2) return 1;
	if(n%2==0) return 0;
	for(int i=3; i<=sqrt(n); i+=2){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n;
	cin >> n;
	cout << (isPrime(n)?"Yes":"No") << "\n";
	return 0;
}
