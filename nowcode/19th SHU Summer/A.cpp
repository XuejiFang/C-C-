#include<bits/stdc++.h>
#define pb push_back
#define loop(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define int ll
#define mod 998244353
#define all(x) x.begin(),x.end()
#define endl '\n'
#define gcd __gcd
using namespace std;

void solve(){
	int x1,x2,y1,y2,z1,z2;
	cin>>x1>>y1>>z1;
	cin>>x2>>y2>>z2;
	int a=y2*z1-y1*z2;
	int b=x1*z2-x2*z1;
	int c=y1*x2-y2*x1;
	if(abs(a)<=200&&abs(b)<=200&&abs(c)<=200)
		cout<<a<<" "<<b<<" "<<c;
	else{
		int t1=gcd(a,b);
		int t2=gcd(t1,c);
		a/=t2;
		b/=t2;
		c/=t2;
		cout<<a<<" "<<b<<" "<<c;
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
