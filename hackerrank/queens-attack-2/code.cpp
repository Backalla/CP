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
    int n,k,r,c;
    int rq,cq;

    scanf("%d %d",&n,&k);
    VI row(n,0);
    vector<vector<int> > board(n,row);
    // printf("%d",board[3][4]);
    // board[3][4]=1;
    // printf("%d",board[3][4]);

    // return 0;
    scanf("%d %d",&rq,&cq);
    rep(i,k)
    {
        scanf("%d %d",&r,&c);
        board[n-r][c-1]=1;
    }
    rq=n-rq;
    cq--;
    // printf("%d %d\n",rq,cq);
    int score = 0;
    //up direction
    for(int i=rq;i>=0;i--)
    {
        if(board[i][cq]==1)
        {
            // printf("obstacle at %d %d\n",i,cq);
            break;
        }
        score++;
    }
    // printf("score:%d\n",score);
    //down direction
    for(int i=rq;i<n;i++)
    {
        if(board[i][cq]==1)
        {
            // printf("obstacle at %d %d\n",i,cq);
            break;
        }
        score++;
    }
    // printf("score:%d\n",score);
    //left direction
    for(int i=cq;i>=0;i--)
    {
        // if(board[rq][i]==1) break;
        if(board[rq][i]==1)
        {
            // printf("obstacle at %d %d\n",rq,i);
            break;
        }
        score++;
    }
    // printf("score:%d\n",score);
    //right direction
    for(int i=cq;i<n;i++)
    {
        if(board[rq][i]==1) break;
        score++;
    }
    // printf("score:%d\n",score);
    //up-left direction
    int j=cq;
    for(int i=rq;i>=0 && j>=0;i--)
    {
        if(board[i][j]==1) break;
        score++;
        j--;
    }
    // printf("score:%d\n",score);

    //up-right direction
    j=cq;
    for(int i=rq;i>=0 && j<n;i--)
    {
        if(board[i][j]==1) break;
        score++;
        j++;
    }
    // printf("score:%d\n",score);

    //down-right direction
    j=cq;
    for(int i=rq;i<n && j<n;i++)
    {
        if(board[i][j]==1) break;
        score++;
        j++;
    }
    // printf("score:%d\n",score);

    //down-left direction
    j=cq;
    for(int i=rq;i<n && j>=0;i++)
    {
        if(board[i][j]==1) break;
        score++;
        j--;
    }



    printf("%d",score-8);


    return 0;
}
