#include <bits/stdc++.h>
using namespace std;

#define MAXN 100005
#define LOWER_BOUND 100000

struct Server {
    int x, y;
}server[MAXN];

int main(int argc, char **argv) {
    signal(SIGPIPE, SIG_IGN);

    ifstream tcInput, from_user;
    ofstream to_user;

    tcInput.open("input.txt");  //testcase
    to_user.open(argv[1]);
    from_user.open(argv[2]);

    int n,m;
    tcInput >> n;
    to_user << n << endl;
	
	for(int i=1;i<=n;i++){
		int x,y;
		tcInput >> x >> y;
		to_user << x << ' ' << y << endl;
		server[i]={x,y};
	}
	tcInput >> m;
    to_user << m << endl;
	double Total_distance=0;

	for(int i=1;i<=m;i++){
		int x,y;
		tcInput >> x >> y;
		to_user << x << ' ' << y << endl;

		int idx;
		from_user >> idx;
		double distance=sqrt(pow(x-server[idx].x,2)+pow(y-server[idx].y,2));
		Total_distance+=distance;

		server[idx]={x,y};
	}
	double BestSolution;
	tcInput >> BestSolution;

	double score = max(0.0, (Total_distance-LOWER_BOUND)/(BestSolution-LOWER_BOUND));
	cout << score << endl;
	cerr << score*100 << endl;

    tcInput.close();
    to_user.close();
    from_user.close();
}