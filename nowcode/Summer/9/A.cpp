#include<bits/stdc++.h>
#define pb push_back
#define loop(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define int ll
#define mod 998244353
#define all(x) x.begin(),x.end()
#define endl '\n'
using namespace std;
const int N=1e6+5;

vector<int> nums;
int n,m;
int Cnt[N];

int next(int start){
    int cnt=0,i;
    memset(Cnt,0,sizeof(Cnt));
    for(i=start;i<nums.size()&&cnt<m;i++){
        if(!Cnt[nums[i]])   {Cnt[nums[i]]++;cnt++;}
    }
    if(cnt==m)  return i-1;
    return -1;
}

void solve(){
/*
    int n;
    cin>>n;

*/
    
    cin>>n>>m;

    nums=vector<int>(n);
    set<int> st;
    for(auto & x:nums)  cin>>x;   


    int len=st.size();
    int ans=0;
    for(int i=0;i<nums.size()-m+1;i++){
        int end=next(i);
        //cout<<"start"<<i<<" "<<"end"<<end<<endl;
        if(end!=-1) ans+=nums.size()-end;
    }
    cout<<ans;
}


signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int _test=1;
   	//cin>>_test;
    while(_test--){
        solve();
    }
    return 0;
}
