#include<bits/stdc++.h>
#define pb push_back
#define loop(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define int ll
#define mod 998244353
#define all(x) x.begin(),x.end()
#define endl '\n'
using namespace std;

struct node{
	int H,M,val;
};

bool cmp(node a,node b){
	if(a.val>b.val){
		return 1;
	}else if(a.val==b.val){
		return a.H*60+a.M<b.H*60+b.M;
	}else{
		return 0;
	}
}


void solve(){
/*
    int n;
    cin>>n;
    vector<int> nums(n);
    for(auto & x:nums)  cin>>x;
*/
	int n,m;
	cin>>n>>m;
	vector<node> nums;
	for(int i=0;i<n;i++){
		node tmpnode;
		cin>>tmpnode.H>>tmpnode.M>>tmpnode.val;
		nums.pb(tmpnode);
	}
	sort(all(nums),cmp);
	for(int i=0;i<m;i++){
		cout<<nums[i].H<<" "<<nums[i].M<<" "<<nums[i].val<<endl;
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
