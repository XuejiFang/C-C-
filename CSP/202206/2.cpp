#include<bits/stdc++.h>
#define ll long long
#define int ll
#define pb push_back
#define endl '/n'
using namespace std;

int L,S;
const int MAXN=1e9+5;
bool nums[MAXN][MAXN];
    
bool CHECK(int x,int y){
    return x-S>=0&&y+S<=L;
}

string M2V(vector<vector<int> > nums){
    string cns;
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums[i].size();j++){
            cns+=nums[i][j]+'0';
        }
    }
    return cns;
}

string GetS(vector<vector<int> > nums,int x,int y){
    string cns;
    for(int i=x-S;i<=x;i++){
        for(int j=y;y<=y+S;j++){
            cns+=nums[i][j]+'0';
        }
    }
    return cns;
}

void solve(){
    int n;
    cin>>n>>L>>S;
    

}


signed main(){
    int _T=1;
    cin>>_T;
    while(_T--){
        solve();
    }

    return 0;
}