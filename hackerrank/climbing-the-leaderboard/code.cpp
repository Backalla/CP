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
// #define tr(it,container) for(typeof((container).begin()) it = (container).begin() ; it !=(container).end() ; it++)
#define INF INT_MAX


int n,m,q,r=0,p=-1;
VI ranks;

VI climbingLeaderboard(VI l, VI a)
{
    VI result;
    rep(i,m)
    {
        // printf("n=%d\n",n);
        while(a[i]>=l[n] && n>=0)
        {
            // printf("r=%d\n",ranks[n]);
            n--;
        }
        if(a[i]==l[n]) result.pb(ranks[n]);
        else result.pb(ranks[n]+1);
        
    }
    return result;
}

int main()
{
    VI l,a,result;
    scanf("%d",&n);
    rep(i,n)
    {
        scanf("%d",&q);
        l.pb(q);
        if(q!=p) r+=1;
        ranks.pb(r);
        p=q;
    }
    // tr(it,ranks)
    // {
    //     printf("%d",*it);
    // }
    scanf("%d",&m);
    rep(i,m)
    {
        scanf("%d",&q);
        a.pb(q);
    }
    n--;
    result = climbingLeaderboard(l,a);
    for(VI::iterator it=result.begin(); it!=result.end();it++)
    {
        printf("%d\n",*it);
    }
    return 0;
}
