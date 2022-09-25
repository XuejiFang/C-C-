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

    int n;
    cin>>n;

    if(n==1)    {cout<<"NO";return;}
    if(n<=3)    {cout<<"YES";return;}

    string s;
    cin>>s;

    for(int i=1;i<n-1;i++){
        if(s[i]>=s[i-1]&&s[i]>s[i+1]){
            string subs=s.substr(i,n-i);
            string indexs=subs;
            sort(all(subs));
            subs.reserve()
            if(subs==indexs){
                cout<<"Yes";
                return;
            }else{
                cout<<"No";
                return;
            }
        }else if(s[i]<=s[i-1]&&s[i]<s[i+1]){
            string subs=s.substr(i,n-i);
            string indexs=subs;
            sort(all(subs));
            //subs.reserve()
            if(subs==indexs){
                cout<<"Yes";
                return;
            }else{
                cout<<"No";
                return;
            }
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
