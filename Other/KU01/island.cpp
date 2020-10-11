/*
	Task: Island
	Author: Pana Wanit
	Lang: C++17
	School: RYW
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> ls;
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,m,sum=0,cnt=0; // cnt = island
	bool ch=0;
	cin >> n >> m;
	for(int i=1,x; i<=n; i++){
		cin >> x;
		if(x > 0 && ch) ls.push_back(sum),sum=0,ch=0,cnt++;
		if(x < 0) ch=1,sum -= x-1;
	}
	if(sum != 0) ls.push_back(sum);
	int ans=0;
	sort(ls.begin(),ls.end());
	for(int i=0; i<cnt-m; i++) ans += ls[i];
	cout << ans << "\n";
	return 0;
}
