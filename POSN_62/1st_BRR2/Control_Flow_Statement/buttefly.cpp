/*
 	TASK : Butterfly
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n;
	cin >> n;
	for(int i=0; i<n-1; i++){
		for(int j=0; j<i+1; j++) cout << "*";
		for(int j=0; j<(n*2-3)-2*i; j++) cout << "-";
		for(int j=0;j<i+1;j++) cout << "*";
		cout << "\n";
	}
	for(int i=2*n-1;i--;) cout << "*";
	cout << "\n";
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++) cout << "*";
		for(int j=0; j<i*2+1; j++) cout << "-";
		for(int j=0; j<n-1-i; j++) cout << "*";
		cout << "\n";
	}
	return 0;
}
