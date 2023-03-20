// #define Many_SubTask
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(a) begin(a),end(a)
#define pb push_back
#define pii pair<int,int>
#define F first
#define S second
#define mp make_pair
const int mod=998244353;
const int inf=1e18;
const int MAXN=1000005;


void solve(){
	int n,m;
	cin >> n >> m;
	vector<array<int,3>> a;
	for(int i=0;i<n;i++){
		int x,r,k;
		cin >> x >> r >> k;
		a.pb({x,r,k});
	}
	sort(all(a));
	int target;
	while(m--){
		cin >> target;
		int cnt=0,ans=0;
		for(auto i:a){
			if(i[0]-i[1]<=target && target<=i[0]+i[1]){
				cnt++;
				ans+=i[2]*cnt;
			}
		}
		cout << ans << ' ';
	}	
}


signed main(){
	cin.sync_with_stdio(0),cin.tie(0);
	int N=1;
	#ifdef Many_SubTask
	cin >> N;
	#endif
	for(int i=1;i<=N;i++){
		solve();
	}
}
