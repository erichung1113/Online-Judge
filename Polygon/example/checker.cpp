#include "testlib.h"
 
int main(int argc, char * argv[]) {
    registerTestlibCmd(argc, argv);
    int n = inf.readInt();
    for(int i=0;i<n;i++){
        int ja = ans.readInt();
        int pa = ouf.readInt();
        if (ja != pa){
            quitf(_wa, "expected %d, found %d", ja, pa);
            return 0;
        }
    }
    quitf(_ok, "answer is correct");
}
