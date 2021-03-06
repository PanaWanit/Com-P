/*
 	TASK : Velvet Sell
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN =1e5;
int a[mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,q;
	cin >> n >> q;
	for(int i=0; i<n; i++ ) cin >> a[i];
	sort(a,a+n);
	while(q--){
		int x;
		cin >> x;
		cout << lower_bound(a,a+n,x)-a << "\n";
	}
	return 0;
}
