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
    int n;
    int q,k;
    VI remainders;

    // unordered_map<int,int> S;
    // unordered_map<int,int>::iterator Sit,Sit2;
    pair<int,int> s1,s2;
    // VI S;
    // unordered_set< pair<int,int> > S;
    scanf("%d %d",&n,&k);
    rep(i,k) remainders.pb(0);
    if(k==1)
    {
        printf("1\n");
        return 0;
    }
    rep(i,n)
    {
        scanf("%d",&q);
        // printf("%d %d = %d\n",q,k,q%k);
        remainders[q%k]+=1;
    }
    int r=min(remainders[0],1);
    for(int i=1;i<(k/2)+1;++i)
    {
        // printf("%d > %d\n",i,remainders[i]);
        if(i!=k-i || )
        r+=max(remainders[i],remainders[k-i]);
    }

    printf("%d\n",r);

    return 0;
}
