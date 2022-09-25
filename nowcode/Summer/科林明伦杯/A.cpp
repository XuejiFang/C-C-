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
/*
    int n;
    cin>>n;
    vector<int> nums(n);
    for(auto & x:nums)  cin>>x;
*/
   
   cin>>ss;
   vector<int> nums;
   for(int i=0;i<ss.size();){
   		int j=i+1;
   		if(ss[i]=='1'){
   			j=next(i);
   			nums.push_back(j-i+1);
   			i=j+1;
   		}else{
   			i=j;
   		}	
   }
   vector<int> nums2(nums.size());
   for(int i=0;i<nums.size();i++){
   		if(i%2==0)	nums[i]=nums[i]*nums[i];
   		else		nums[i]=-nums[i]*nums[i];

   		nums2[i]=-nums[i];
   } 
   int ans1=maxSubArray(nums);
   int ans2=maxSubArray(nums2);
   cout<<max(ans1,ans2);
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
