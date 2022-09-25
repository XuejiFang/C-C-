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
/*
    int n;
    cin>>n;
    vector<int> nums(n);
    for(auto & x:nums)  cin>>x;
*/	
	string s,subs;
	cin>>subs;
	cin>>s;
	int l=0,r=subs.size()-1;
	int L=0,R=s.size()-1;
	while(l<r){
		if(subs[l]==s[L]){
			l++;
			L++;
		}else{
			break;
		}		
	}

	while(r>=l){
		if(subs[r]==s[R]){
			r--;
			R--;
		}else{
			break;
		}
	}
	if(r<l)	cout<<"YES"<<endl;
	else	cout<<"NO"<<endl;


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

