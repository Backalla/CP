#include <bits/stdc++.h>
using namespace std;
typedef vector<int> VI;
typedef unsigned long ULD;
typedef unsigned long long ULLD;
typedef vector<ULLD> VULLD;
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define ff first
#define ss second
#define sz(a) ((int)(a.size()))
#define ln length()
#define rep(i,n) for(int i=0;i<(n);++i)
#define tr(it,container) for(typeof((container).begin()) it = (container).begin() ; it !=(container).end() ; it++)
#define INF INT_MAX

int main()
{
    int squares [8][3][3] = {
        {{8,1,6},{3,5,7},{4,9,2}},
        {{4,9,2},{3,5,7},{8,1,6}},
        {{6,1,8},{7,5,3},{2,9,4}},
        {{2,9,4},{7,5,3},{6,1,8}},
        {{4,3,8},{9,5,1},{2,7,6}},
        {{2,7,6},{9,5,1},{4,3,8}},
        {{8,3,4},{1,5,9},{6,7,2}},
        {{6,7,2},{1,5,9},{8,3,4}}    
    };

    int test [3][3],a;
    rep(i,3)
    {
        rep(j,3)
        {
            scanf("%d",&test[i][j]);
        }
    }
    int m=500;
    rep(s,8)
    {
        int ss=0;
        rep(i,3)
        {
            rep(j,3)
            {
                ss+=abs(squares[s][i][j]-test[i][j]);
            }
        }
        m = min(m,ss);
        // printf("%d",m);

    }
    printf("%d",m);
    return 0;
}
