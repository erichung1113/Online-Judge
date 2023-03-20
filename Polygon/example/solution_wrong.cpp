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
    srand(time(0));
    // int n;
    // cin >> n;
    int a,b;
    // for(int i=0;i<n;i++){
        // cin >> a >> b;
    while(cin >> a >> b){
        int x=rand()%100<=98?0:1;
        cout << a+b+x << '\n';
    }
 
}
 
 
signed main(){
    //cin.sync_with_stdio(0),cin.tie(0);
    int N=1;
    #ifdef Many_SubTask
    cin >> N;
    #endif
    for(int i=1;i<=N;i++){
        solve();
    }
}
