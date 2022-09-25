#include<bits/stdc++.h>
#define pb push_back
#define loop(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define int ll
#define mod 998244353
#define all(x) x.begin(),x.end()
#define endl '\n'
using namespace std;
const int MAXN=10005;
int height[MAXN],f[MAXN];

void init_set(){
	for(int i=0;i<MAXN;i++){
		if(i==1){
			height[i]=0;
		}else{
			height[i]=-1;			
		}
		f[i]=i;
	}
}

int find_set(int x){
	if(x!=f[x])	f[x]=find_set(f[x]);
	return f[x];
}

void union_set(int a,int b){
	//a=find_set(a);
	//b=find_set(b);
	if(a==1||b==1)	{
		if(b==1)	height[a]=1;
		if(a==1)	height[b]=1;
		return;
	}
	if(height[a]<height[b]){
		height[a]=height[b]+1;
		f[a]=b;
	}else{
		height[b]=height[a]+1;
		f[b]=a;
	}
}
void solve(){
/*
    int n;
    cin>>n;
    vector<int> nums(n);
    for(auto & x:nums)  cin>>x;
*/	
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++){
		int a,b;
		cin>>a>>b;
		
		union_set(a,b);
	}
	vector<int> nums;
	for(int i=1;i<=n;i++){
		nums.pb(height[i]);
		cout<<i<<" "<<height[i]<<endl;
	}
	vector<vector<int>> numss(n+1);
	for(int i=0;i<=n;i++){
		numss[i].pb(0);
	}
	for(int i=1 ;i<=nums.size();i++){
		if(f[i]==1)	continue;
		numss[f[i]].pb(i);
		numss[f[i]][0]=max(numss[f[i]][0],height[i]);
	//	cout<<i<<" "<<f[i]<<endl;
	}
	for()

}


signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int _test=1;
    cin>>_test;
    while(_test--){
    	init_set();
        solve();
    }
    return 0;
}
