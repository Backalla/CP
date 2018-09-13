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
    int t,c,n,m,w,score,new_c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&n,&c,&m);
        w = n/c;
        score = w;
        while(w>=m)
        {
            // printf("%d ",w);
            new_c = w/m;
            score+=new_c;
            w-=new_c*m;
            w+=new_c;
        }
        printf("%d\n",score);
    }
    
    return 0;
}
