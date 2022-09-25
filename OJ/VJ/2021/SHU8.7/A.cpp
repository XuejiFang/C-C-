#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n;
    cin>>n;
    long long a[n+2],a1[n+2],a2[n+2];
    a1[0]=1,a2[n+1]=1;
    for(int i=1;i<=n;i++)   cin>>a[i],a1[i]=(a1[i-1]*a[i])%mod;
    for(int i=n;i>=1;i--)   a2[i]=(a2[i+1]*a[i])%mod;
    for(int i=1;i<=n;i++)   cout<<(a1[i-1]*a2[i+1])%mod<<" ";
    return 0;
}
