/*
 	TASK : Castle King
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 5e5+1;
int a[mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,sum=0;
	cin >> n;
	for(int i=0; i<n; i++) cin >> a[i],sum+=a[i];
	sum*=2;
	sort(a,a+n);
	sum += a[0] + a[n-1] + n;
	for(int i=0; i<n-1; i++){
		sum += a[i+1] - a[i];
	}
	cout << sum << "\n";
	return 0;
}
