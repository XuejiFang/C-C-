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
	int N,M;
	cin>>N>>M;
	vector<int> nums(N);
    for(auto & x:nums)  cin>>x;
	 
	int sum=0;
	int ans=0;
	while(sum<=M&&ans<=N){
		sum+=nums[ans];
		ans++;
		if(ans==1){
			sum+=1;
		}else{
			sum+=ans*(3*ans-1)/2;
		}
		if(sum<=M&&ans==N){
			cout<<ans;
			break;
		}
		if(sum>M||ans>N){
			cout<<ans-1;
			break;
		}
	}
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
