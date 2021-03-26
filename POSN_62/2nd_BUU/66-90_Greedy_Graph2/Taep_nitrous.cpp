#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using db = double;
#define vt vector
#define ar array

#define TA template<class A> void
#define TC template<class A, class... T> void
#define CA const A& x, const T& ...t

#define FOE(x, a) for(auto& x: a)
#define FOR_R(i, s, e, p) for(int i=(s); (p)>0?i<(e):i>=(e); i+=(p))
#define FOR1(e) FOR_R(i, 0, e, 1)
#define FOR2(i, e) FOR_R(i, 0, e, 1)
#define FOR3(i, s, e) FOR_R(i, s, e, 1)
#define FOR4(i, s, e, p) FOR_R(i, s, e, p)
#define ALL5(a, b, c, d, e, ...) e
#define SEL_FOR(...) ALL5(__VA_ARGS__, FOR4, FOR3, FOR2, FOR1)
#define FOR(...) SEL_FOR(__VA_ARGS__)(__VA_ARGS__)

template<class A> bool umax(A& x, const A& y) {return x<y?x=y,1:0;} 
template<class A> bool umin(A& x, const A& y) {return x>y?x=y,1:0;}
TA read(vt<A>& v); 
template<class A, size_t SZ>
void read(ar<A,SZ>& a); 
TA read(A& x) {cin >> x;} 
TC read(A& x, T& ...t) {read(x); read(t...);} 
template<class A, size_t SZ> void read(ar<A, SZ>& a) {FOE(x, a) read(x);}
TA read(vt<A>& v) {FOE(x, v) read(x);}
TA write(const A& x) {cout << x;} 
TC write(CA) {write(x);write(t...);} 
void print() {write("\n");} TC print(CA) {write(x); if(sizeof ...(t)) write(" "); print(t...);}
void DBG() {cerr << "]" << endl;} TC DBG(A x, T ...t) {cerr << x; if(sizeof ...(t)) cerr << ", " ; DBG(t...);}
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
const int mxN = 5e3+1;
int d[101][mxN];
vt<pair<int,int>> adj[mxN];
priority_queue<pair<int,ar<int,2>>, vt<pair<int,ar<int,2>>>, greater<pair<int,ar<int,2>>>> pq;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,t;
	read(n, m, t);
	while(m--) {
		int u,v,w;
		read(u, v, w);
		adj[u].emplace_back(v, w);
		adj[v].emplace_back(u, w);
	}
	memset(d, 0x3f, sizeof(d));
	d[0][1] = 0;
	pq.emplace(0, ar<int,2>{1, 0});
	while(!pq.empty()) {
		auto p = pq.top();
		auto u = p.second;
		pq.pop();
		FOE(v, adj[u[0]]) {
			if(u[1]+1<=t&&d[u[1]+1][v.first]>p.first+v.second/2) {
				d[u[1]+1][v.first]=p.first+v.second/2;
				pq.emplace(d[u[1]+1][v.first], ar<int,2>{v.first, u[1]+1});
			}
			if(d[u[1]][v.first]>p.first+v.second) {
				d[u[1]][v.first]=p.first+v.second;
				pq.emplace(d[u[1]][v.first], ar<int,2>{v.first, u[1]});
			}
		}
	}
	int mn=2e9;
	FOR(i, 0, t+1) umin(mn, d[i][n]);
	print(d[0][n]);
	print(mn);
	print(d[0][n]-mn);
	return 0;
}