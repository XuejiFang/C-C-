#include<bits/stdc++.h>
#define ll long long 

using namespace std;

ll fastpow(ll a,ll n,ll MOD){
	ll base=a,res=1;
	while(n){
		if(n&1){
			res=(res*base)%MOD;
		}
		base=(base*base)%MOD;
		n>>=1;
	}
	return res;
}

int main(){
	ll a,n;
	cin>>a>>n;
	ll ans=fastpow(a,n,1000);
	cout<<ans;
	vector<int> x;

	return 0;
}
