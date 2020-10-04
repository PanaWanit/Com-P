/*
 	TASK : richy sort
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<int,pii> pip;
#define fp first
#define sp second
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(),(x).end()
const int mxN = 1e5;
pii a[mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n;
	cin >> n;
	for(int i=0; i<n; i++) cin >> a[i].fp >> a[i].sp;
	sort(a,a+n,[] (const pii& a , const pii& b) {return a.fp < b.fp || (a.fp == b.fp && b.fp > b.sp);});
	for(int i=0; i<n; i++) cout << a[i].fp << " " << a[i].sp << "\n";
	return 0;
}
