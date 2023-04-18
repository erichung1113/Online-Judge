#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(int argc, char **argv) {
    ifstream tcInput("input.txt");
    ofstream to_user(argv[1]);
    ifstream from_user(argv[2]);

    int n;
    tcInput >> n;

    double score = 0;
    for (int i = 1; i <= n; i++) {
        ll a, b, userans;
        tcInput >> a >> b;
        to_user << a << ' ' << b << endl;
        from_user >> userans;
        ll ans = a + b;
        score += (userans == ans) * 1.0 / n;
    }
    cout << score << '\n';

    tcInput.close();
    to_user.close();
    from_user.close();
}