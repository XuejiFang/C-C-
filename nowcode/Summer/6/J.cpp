#include<bits/stdc++.h>
#define pb push_back
#define loop(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define int ll
#define mod 998244353
#define all(x) x.begin(),x.end()
#define endl '\n'
#define MAXN 1e8
using namespace std;

void solve(){
	int a,b,c,x;
	cin>>a>>b>>c>>x;
	int x1=a-b,x2=b;
	if(x1==x2){
		if(c==x||x2-c==x){
			cout<<"Yes"<<endl;
			return;
		}else{
			cout<<"No"<<endl;
			return;
		}
	}else{
		if((x-c)%(x1-x2)==0||(x-(x1-c))%(x1-x2)==0||(x-(x2-c))%(x1-x2)==0){
			cout<<"Yes"<<endl;
			return; 
		}else{
			cout<<"No"<<endl;
			return;
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
