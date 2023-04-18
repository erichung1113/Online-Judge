#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    ifstream input(argv[1]);
    ifstream user_output(argv[2]);
    ifstream correct_output(argv[3]);

    long long userans, ans;
    user_output >> userans;
    correct_output >> ans;

    if (userans == ans)
        cout << 1.0 << '\n';
    else
        cout << 0.0 << '\n';
}