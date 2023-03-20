#include "testlib.h"
#define MAXN 200000

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int n=inf.readInt(1, MAXN, "n");
    inf.readSpace();
    int m=inf.readInt(1, MAXN, "m");
    inf.readEoln();
    for(int i=0;i<n;i++){
        inf.readInt(1, MAXN, "x");
        inf.readSpace();
        inf.readInt(1, MAXN, "r");
        inf.readSpace();
        inf.readInt(1, MAXN, "k");
        inf.readEoln();
    }
    for(int i=0;i<m;i++){
        inf.readInt(1, MAXN, "y");
        inf.readSpace();
    }
    inf.readEoln();
    inf.readEof();
}