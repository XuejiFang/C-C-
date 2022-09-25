#include<bits/stdc++.h>
using namespace std;
const int maxn=1e8+5;
bool visit[maxn];
int prime[maxn];

int E_sieve(int n){
    for(int i=0;i<=n;i++)   visit[i]=false;
    for(int i=2;i*i<=n;i++)
        if(!visit[i])
            for(int j=i*i;j<=n;j+=i)
                visit[j]=true;
    int k=0;
    for(int i=2;i<=n;i++)
        if(!visit[i])
            prime[k++]=i;
    return k;
}


int main(){
    int l,k;
    cin>>l>>k;
    if(k>1e6){
        cout<<"No";
        return 0;
    }
    int start=E_sieve(l-1);
    int end=E_sieve(l+2*k-1);
    if(end-start>k) cout<<"Yes";
    else cout<<"No";
    system("pause");
    return 0;
}