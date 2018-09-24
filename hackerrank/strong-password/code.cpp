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
    int u=1,l=1,sp=1,d=1;
    string s;
    string specials("!@#$%^&*()-+");
    cin>>n;
    cin>>s;
    rep(i,sz(s))
    {
        if(u==1 && isupper(s[i])) u--;
        if(l==1 && islower(s[i])) l--;
        if(d==1 && isdigit(s[i])) d--;
        if(sp==1)
        {
            size_t found = specials.find(s[i]);
            if(found!=string::npos) sp--;
        }
    }
    int f = u+l+d+sp;
    // printf("%d\n%d\n",f,6-(f+sz(s)));

    if(f+sz(s)<6)
        f+=6-(f+sz(s));

    printf("%d",f);
    return 0;
}
