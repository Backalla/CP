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
    int t,i;
    string s,h("hackerrank");
    cin>>t;
    while(t--)
    {
        cin>>s;
        i=0;
        rep(j,sz(s))
        {
            if(s[j]==h[i])
            i++;
        }
        printf((i==10)?"YES\n":"NO\n");
    }
    return 0;
}
