#include <bits/stdc++.h>
using namespace std;

struct Server {
    int x, y;
};

int query(int x, int y, Server *server, int n) {
    double mi = 1e9;
    int idx = 0;
    for (int i = 1; i <= n; i++) {
        double distance = sqrt(pow(x - server[i].x, 2) + pow(y - server[i].y, 2));
        if (distance < mi) {
            mi = distance;
            idx = i;
        }
    }
    server[idx] = {x, y};
    return idx;
}