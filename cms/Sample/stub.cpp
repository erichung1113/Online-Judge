#include <bits/stdc++.h>
using namespace std;

int add(int x, int y);

int main(int argc, char **argv) {
    ifstream input(argv[2]);
    ofstream output(argv[1]);

    int a, b;
    while (input >> a >> b) {
        output << add(a, b) << endl;
    }

    input.close();
    output.close();
    return 0;
}
