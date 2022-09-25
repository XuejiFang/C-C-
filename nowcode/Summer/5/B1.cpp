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
	int sum=0;
    for(auto & x:nums) {
    	cin>>x;
    	sum+=x;
    }
    //cout<<sum<<endl;
	int ans=N;
	sum+=ans*ans*(1+ans)/2;

	while(sum>M){
		sum-=ans*ans*(1+ans)/2;
		ans--;
		sum+=ans*ans*(1+ans)/2;
		sum-=nums[ans];
	}
	cout<<ans;

}
/*
3
4 5
2 3 4 5
4 11
2 3 4 5
4 26
2 3 4 5
*/


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
