/*
 	TASK : Hack
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e4;
string a[mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,m,k;
	cin >> n >> m >> k;
	for(int i=0; i<n; i++) cin >> a[i];
	sort(a,a+n);
	while(m--){
		string x;
		cin >> x;
		cout << (*lower_bound(a,a+n,x) == x?"Accepted":"Rejected") << "\n";
	}
	return 0;
}
