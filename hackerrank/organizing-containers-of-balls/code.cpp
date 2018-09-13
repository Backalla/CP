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
    int q,n,a;
    int M[110][110];
    int r[110];
    int c[110];
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&n);
        rep(i,n)
        {
            r[i]=0;
            c[i]=0;
        }
        rep(i,n)
        {
            rep(j,n)
            {
                scanf("%d",&a);
                r[i]+=a;
                M[i][j]=a;
                c[j]+=a;
            }
        }
        // rep(i,n)
        // {
        //     rep(j,n)
        //     {
        //         printf("%d ",M[i][j]);
        //     }
        //     printf("\n");
        // }
        // rep(i,n)
        // {
        //     printf("%d ",r[i]);
        // }
        // printf("\n");
        // rep(i,n)
        // {
        //     printf("%d ",c[i]);
        // }
        // printf("\n");
        sort(r,r+n);
        sort(c,c+n);
        bool done=false;
        rep(i,n)
        {
            if(r[i]!=c[i])
            {
                printf("Impossible\n");
                done = true;
                break;
            }
        }
        if(!done)
        printf("Possible\n");

    }

    return 0;
}
