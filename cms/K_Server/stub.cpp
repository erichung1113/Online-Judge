#include <bits/stdc++.h>
using namespace std;
#define MAXN 100005

struct Server {
    int x, y;
};

Server server[MAXN];

int query(int x, int y,Server *server, int n);

int main(int argc, char **argv) {
    ifstream input;
    ofstream output;
    input.open(argv[2]);
    output.open(argv[1]);

    int n, m;
    input >> n;
    for (int i = 1; i <= n; i++) {
        int x, y;
        input >> x >> y;
        server[i] = {x, y};
    }
    input >> m;
    for (int i = 1; i <= m; i++) {
        int x, y;
		input >> x >> y;
        output << query(x, y, server, n) << endl;
    }

    input.close();
    output.close();

    return 0;
}
