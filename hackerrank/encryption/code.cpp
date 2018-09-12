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

void remove_spaces(char *str)
{
    // To keep track of non-space character count
    int count = 0;
 
    // Traverse the given string. If current character
    // is not space, then place it at index 'count++'
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i]; // here count is
                                   // incremented
    str[count] = '\0';
}

int main()
{
    string t,s;
    getline(cin,t);
    rep(i,sz(t)) if(t[i]!=' ') s.pb(t[i]);


    int l = sz(s);
    // printf("%d\n",l);
    float lsqrt = sqrt(l);
    int r = floor(lsqrt);
    int c = ceil(lsqrt);
    while(r*c<l) r++;
    // printf("%d %d\n",r,c);
    rep(i,c)
    {
        // printf(">%d ",i);
        rep(j,r)
        {
            // printf(" %d = %d",j,j*c+i);
            if(j*c+i < l) printf("%c",s[j*c+i]);
        }
        if(i<c-1) printf(" ");
    }

    return 0;
}
