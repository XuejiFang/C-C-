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

    int n;
    cin>>n;
    vector<int> nums(n);
    for(auto & x:nums)  cin>>x;
	
	int l,r;
	cin>>l>>r;
	vector<int> ans;
	for(int i=0;i<n;i++){
		if(nums[i]>=l&&nums[i]<=r)	ans.push_back(nums[i]);
	}
	
	if(ans.size()==0){
		cout<<r;
	}else{
		sort(all(ans));
		cout<<r+ans[ans.size()-1];
	}
}


signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int _test=1;
   // cin>>_test;
    while(_test--){
        solve();
    }

    return 0;
}
