#include<bits/stdc++.h>
#define pb push_back
#define loop(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define int ll
#define mod 998244353
#define all(x) x.begin(),x.end()
#define endl '\n'
using namespace std;

void solve(){

    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int> numa;
    vector<int> numb;
    vector<int> numc;
    for(int i=0;i<n;i++){
    	int t1,t2,t3;
    	cin>>t1>>t2>>t3;
    	numa.pb(t1);
    	numb.pb(t2);
    	numc.pb(t3);
    }
	sort(all(numa));
	sort(all(numb));
	sort(all(numc));
	ll sum=0;
	for(int i=0;i<a;i++){
		sum+=numa[numa.size()-i-1];
	}
	for(int i=0;i<b;i++){
		sum+=numb[numb.size()-i-1];
	}	
	for(int i=0;i<c;i++){
		sum+=numc[numc.size()-i-1];
	}
	cout<<sum;
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
