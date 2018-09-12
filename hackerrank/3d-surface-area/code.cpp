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
    int r,c;
    int A[120][120];
    scanf("%d %d",&r,&c);
    int score = 0;
    rep(i,r+2)
    {
        rep(j,c+2)
        {
            A[i][j]=0;
        }
    }
    rep(i,r)
    {
        rep(j,c)
        {
            scanf("%d",&A[i+1][j+1]);
        }
    }
    // rep(i,r+2)
    // {
    //     rep(j,c+2) printf("%d ",A[i][j]);

    //     printf("\n");
    // }
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            score+= max(0,A[i][j]-A[i-1][j]);
            score+= max(0,A[i][j]-A[i+1][j]);
            score+= max(0,A[i][j]-A[i][j-1]);
            score+= max(0,A[i][j]-A[i][j+1]);
        }
    }
    printf("%d",score+2*r*c);
    return 0;
}
