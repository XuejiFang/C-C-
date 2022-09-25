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

    int n,k;
    cin>>n>>k;
    vector<int> nums(n);
    for(auto & x:nums)  cin>>x;
/*
	for(int i=1;i<=5;i++){
		for(int j=1;j<=20;j++){
			int ans=i^j;
			cout<<i<<" "<<j<<" "<<ans<<endl;
		}
	} 
*/	
	set<int> all;	
	int tmp=1<<k;
	for(int i=0;i<n;i++){
		all.insert(nums[i]);
		for(int j=i+1;j<n;j++){
			if(all.count(nums[j])==0){
				cout<<nums[i]<<" "<<nums[j]<<" "<<(nums[i]^nums[j])<<endl;
				if((nums[i]^nums[j]<tmp))	nums[j]=nums[i];
			}	
		}
	}
	for(int i=0;i<n;i++)	cout<<nums[i]<<" ";
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
