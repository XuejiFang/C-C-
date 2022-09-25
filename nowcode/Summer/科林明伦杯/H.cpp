#include<bits/stdc++.h>
#define pb push_back
#define loop(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define int ll
#define mod 998244353
#define all(x) x.begin(),x.end()
#define endl '\n'
using namespace std;

string ss;

int  next(int index){
	while(index<ss.size()&&ss[index]=='1')	index++;
	return index-1;
}

int maxSubArray(vector<int>& nums) {
    int dp[nums.size()],MAX=nums[0];
    memset(dp,0,sizeof(dp));
    dp[0]=nums[0];
    for(int i=1;i<nums.size();i++){
        dp[i]=max(dp[i-1]+nums[i],nums[i]);
        MAX=MAX>dp[i]?MAX:dp[i];
    }
    
    return MAX;
}

void solve(){

    int n;
    cin>>n;
    vector<int> nums(n);
    for(auto & x:nums)  cin>>x;
	
	int sum=0,index=0;
	int cns=0;
	while(sum<100){
		sum+=nums[index];
		index=(index+1)%n;
		cns++;
	}
	cout<<cns;

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
