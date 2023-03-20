#include "testlib.h"
#include <iostream>
#include <set>
using namespace std;
 
int main(int argc, char* argv[]){
    registerGen(argc, argv, 1);
    int n=atoi(argv[1]);
    int m=atoi(argv[2]);
    int MaxCoo=atoi(argv[3]);
    int MaxR=atoi(argv[4]);
    int MaxK=atoi(argv[5]);
    
    cout << n << ' ' << m << endl;
    
    vector<int> s;
    for(int i=1;i<=MaxCoo;i++) s.push_back(i);
    shuffle(s.begin(),s.end());
    
    for(int i=0;i<n;i++){
        cout << s[i] << ' ';  //coordinate
        cout << rnd.next(1, MaxR) << ' ';  //radius
        cout << rnd.next(1, MaxK) << '\n';  //attack
    }
    
    for(int i=0;i<m;i++){
        cout << rnd.next(1, MaxCoo) << ' ';
    }
    cout << '\n';
}
