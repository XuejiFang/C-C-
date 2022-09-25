#include<bits/stdc++.h>
#define pb push_back
#define loop(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define int ll
#define mod 998244353
#define all(x) x.begin(),x.end()
#define endl '\n'
#define f(x) (a*x%p*x%p+b*x%p+c)
using namespace std;

const int N = 1e6 + 5;
int p,x,a,b,c,n,m;
int A[N],B[N];
map<int,int> mp;

void solve(){
	
	cin>>n>>m>>p>>x>>a>>b>>c;
	
	for(int i=1;i<=n;i++){
		x=f(x)%p;
		A[i]=x;
	}
	for(int i=1;i<=m;i++){
		x=f(x)%p;
		B[i]=x;
	}
	
	mp.clear();
	for(int i=1;i<=m;i++){
		if(!mp.count(B[i]))	mp[B[i]]=i;
	}
	
	int ans=0;
	for(int i=1;i<=n;i++){
		if(mp.count(A[i])){
			ans=max(ans,min(n-i+1,m-mp[A[i]]+1));
		}
	}
	cout<<ans<<endl;
}


signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int _test=1;
   	cin>>_test;
    while(_test--){
        solve();
    }
    
    return 0;
}
