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

string s;

int get_max_alternate(pair<char,char> p)
{
    int score=0;
    bool f=true;
    rep(i,sz(s))
    {
        if(f)
        {
            if(s[i]==p.first)
            {
                score++;
                f=false;
            }
            if(s[i]==p.second)
            return 0;
        }
        else
        {
            if(s[i]==p.second)
            {
                score++;
                f=true;
            }
            if(s[i]==p.first)
            return 0;
        }
    }
    return score;
}

int main()
{
    int n,score=0,new_score;
    vector<pair<char,char> > pairs;
    unordered_set<char> chars;
    cin>>n;
    cin>>s;
    rep(i,sz(s))
    {
        chars.insert(s[i]);
    }
    for(unordered_set<char>::iterator it=chars.begin();it!=chars.end();++it)
    {
        for(unordered_set<char>::iterator it2=chars.begin();it2!=chars.end();++it2)
        {
            if(*it != *it2)
            pairs.pb(mp(*it,*it2));
        }
    }
    // rep(i,sz(pairs))
    // printf("%d %c %c\n",sz(pairs),pairs[i].first,pairs[i].second);
    rep(i,sz(pairs))
    {
        new_score=get_max_alternate(pairs[i]);
        if(new_score>score)
        {
            // printf("%c %c\n",pairs[i].first,pairs[i].second);
            score=new_score;
        }
    }
    printf("%d",score);


    return 0;
}
