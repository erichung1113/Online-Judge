#include <bits/stdc++.h>
using namespace std;
#define MAXN 200000
#define ll long long

struct BIT {
    ll bit[MAXN + 5] = {0};
    void update(int x, int val) {
        while (x <= MAXN) {
            bit[x] += val;
            x += x & (-x);
        }
    }
    ll query(int x) {
        ll ans = 0;
        while (x) {
            ans += bit[x];
            x -= x & (-x);
        }
        return ans;
    }
};

signed main() {
    cin.sync_with_stdio(0), cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<array<int, 3>> a;
    for (int i = 1; i <= n; i++) {
        int x, R, k;
        cin >> x >> R >> k;
        a.push_back({x - R, k, x});
        a.push_back({x + R + 1, -k, x});
    }
    for (int i = 1; i <= m; i++) {
        int x;
        cin >> x;
        a.push_back({x, MAXN + i, 0});
    }
    sort(a.begin(),a.end());
    vector<ll> ans(m);
    BIT pre, num;
    ll sum = 0;
    for (auto i : a) {
        int val = i[1];
        int pos = i[2];
        if (val > MAXN) {
            int idx = val - MAXN - 1;
            ans[idx] = sum;
        } else if (val < 0) {
            sum -= -val * num.query(pos);
            sum -= pre.query(MAXN) - pre.query(pos);
            num.update(pos, -1);
            pre.update(pos, val);
        } else {
            num.update(pos, 1);
            pre.update(pos, val);
            sum += val * num.query(pos);
            sum += pre.query(MAXN) - pre.query(pos);
        }
    }
    for (auto i : ans) cout << i << ' ';
}
