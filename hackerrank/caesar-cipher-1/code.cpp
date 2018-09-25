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
    string s;
    int n,k;
    cin>>n;
    cin>>s;
    cin>>k;
    rep(i,sz(s))
    {
        if((int)s[i] >= (int)'a' && (int)s[i] <= (int)'z')
            printf("%c",(int)'a'+(((int)s[i]-(int)'a'+k)%26));
        else if((int)s[i] >= (int)'A' && (int)s[i] <= (int)'Z')
            printf("%c",(int)'A'+(((int)s[i]-(int)'A'+k)%26));
        else
            printf("%c",s[i]);
        
    }
    return 0;
}
