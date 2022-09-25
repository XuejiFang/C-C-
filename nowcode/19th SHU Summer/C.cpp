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

	int n,index;
	cin>>n>>index;
	vector<int> nums(n);
	ll sum=0;
	for(int i=0;i<n;i++){
		int tmpindex,score;
		cin>>tmpindex>>score;
		nums[tmpindex-1]=score;
		sum+=score;
	}
	double ave=sum/double(n);
	for(int i=0;i<n;i++){
		if(i+1==index){
			if(nums[i]<60)	nums[i]=60;
		}else{
			if(nums[i]>=ave){
				nums[i]-=2;
				if(nums[i]<=0)	nums[i]=0;
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
        cout<<endl;
    }
    return 0;
}
