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
    int s,t,a,b,m,n,q,scorea=0,scoreb=0;
    scanf("%d %d",&s,&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d",&m,&n);
    VI apples,oranges;
    rep(i,m)
    {
        scanf("%d",&q);
        if(q+a>=s && q+a<=t) scorea++;
    }
    printf("%d\n",scorea);


    rep(i,n)
    {
        scanf("%d",&q);
        if(q+b>=s && q+b<=t) scoreb++;        
    }
    printf("%d",scoreb);




}
