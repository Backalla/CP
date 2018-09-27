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

int weight(char c)
{
    return (int)c-(int)'a'+1;
}

int main()
{
    string s;
    int n;
    unordered_set<int> u;
    unordered_set<int>::iterator found;
    cin>>s;
    char p;
    int c=0;
    rep(i,sz(s))
    {
        if(i==0)
        {
            p=s[i];
            u.insert(weight(p));
            c=1;
        }
        else
        {
            if(s[i]==p)
            {
                c++;
                u.insert(c*weight(p));
            }
            else
            {
                p=s[i];
                c=1;
                u.insert(weight(p));
            }
        }
    }
    // tr(it,u)
    // {
    //     printf("%d ",*it);
    // }
    cin>>n;
    while(n--)
    {
        cin>>c;
        found = u.find(c);
        if(found==u.end()) printf("No\n");
        else printf("Yes\n");

    }
    return 0;
}
