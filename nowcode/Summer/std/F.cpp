#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=1005;
const int MAXV=1000005;
int phi[MAXV];
void build()
{
    iota(phi,phi+MAXV,0);
    for(int i=1;i<MAXV;i++)
        for(int j=2*i;j<MAXV;j+=i)
            phi[j]-=phi[i];
}
short x[MAXV],y[MAXV],dp[MAXN][MAXN];
pair<short,short> stk[MAXN];
ll cal(int n,int m,int d)
{
    static short tx[MAXV],ty[MAXV];
    for(int i=d,j=1;i<=n*m;i+=d,j++)
        dp[x[i]][y[i]]=-1,tx[j]=x[i],ty[j]=y[i];
    for(int i=d,j=1;i<=n*m;i+=d,j++)
    {
        short cx=tx[j],cy=ty[j];
        if(dp[cx][cy]>=0 || dp[cx-1][cy]<0)continue;
        short now=0;
        while(dp[cx][cy]<0)dp[cx][cy]=++now,cx++;
    }
    ll res=0;
    for(int i=d,j=1;i<=n*m;i+=d,j++)
    {
        short cx=tx[j],cy=ty[j];
        if(dp[cx][cy]==0 || dp[cx][cy-1]>0)continue;
        short top;
        stk[top=0]={0,cy-1};
        ll now=0;
        while(dp[cx][cy]>0)
        {
            while(stk[top].first>=dp[cx][cy])
            {
                int v,k;
                tie(v,k)=stk[top--];
                now-=v*(k-stk[top].second);
            }
            res+=(now+=dp[cx][cy]*(cy-stk[top].second));
            stk[++top]={dp[cx][cy],cy};
            dp[cx][cy]=0,cy++;
        }
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    build();
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            int a;
            cin>>a;
            x[a]=i,y[a]=j;
        }
    ll res=0;
    for(int i=1;i<=n*m;i++)
        res+=phi[i]*cal(n,m,i);
    cout<<res<<"\n";
    return 0;
}
