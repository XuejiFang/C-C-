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
    string nums;
    cin>>nums;
    int len=nums.size();
    cout<<nums<<" "; 
    
    string ans="";
    if(len==1){
    	cout<<nums;
    	return;
    }
    if(nums[0]!='9'){
    	for(int i=0;i<len-1;i++){
    		cout<<9;
    	}
    	return;
	}
	int i=0;
	while(nums[i]=='9'){
		cout<<9;
		i++;
	}
	if(i==len-1){
		cout<<nums[len-1];
		return;
	}	
	for(int j=i;j<len-1;j++){
		cout<<9;
	}
	return;
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
