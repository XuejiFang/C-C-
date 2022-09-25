#include<bits/stdc++.h>
#define pb push_back
#define loop(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define int ll
#define mod 998244353
#define all(x) x.begin(),x.end()
#define endl '\n'
#define gcd __gcd
using namespace std;

const int MAXN=1e7;


void solve(){
/*
    int n;
    cin>>n;
    vector<int> nums(n);
    for(auto & x:nums)  cin>>x;
*/
	int a,n;
	cin>>a>>n;
	
	bool flag[1005];
	memset(flag,0,sizeof(flag));
	int start=1;
	flag[a]=1;
	while(--n){
		if(gcd(start,a)==1){
			flag[start]=1;
			a=start;
			while(flag[++start]==1){}
		}else{
			for(int i=start;i<1000005;i++)	
				if(gcd(i,a)==1){
					a=i;
					break;
				}
		}
	} 
	cout<<a<<endl;

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
