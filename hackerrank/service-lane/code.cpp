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
    VI lane;
    int n,t,w,i,j,m;
    scanf("%d %d",&n,&t);
    while(n--)
    {
        scanf("%d",&w);
        lane.pb(w);
    }
    // tr(it,lane)
    // printf("%d ",*it);
    // printf("\n");
    while(t--)
    {
        m=-1;
        scanf("%d %d",&i,&j);
        // printf("[%d] %d [%d] %d = %d\n",i,*(lane.begin()+i),j,*(lane.begin()+j),*min_element(lane.begin()+i,lane.begin()+j+1));
        printf("%d\n",*min_element(lane.begin()+i,lane.begin()+j+1));
    }
    return 0;
}
