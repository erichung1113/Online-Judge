#include "testlib.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    registerGen(argc, argv, 1);
    int n=rnd.next(1, 100);
    cout << n << endl;
    for(int i=0;i<n;i++){
        cout << rnd.next(1, 100) << ' ' << rnd.next(1, 100) << endl;
    }
}