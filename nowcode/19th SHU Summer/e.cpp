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

    int n,m;
    cin>>n>>m;
 /*   vector<int> nums(n);
    for(auto & x:nums)  cin>>x;
*/
	double sum=0.0;
	for(int i=0;i<n;i++){
		char c;
		double p;
		cin>>c>>p;
		if(c=='D'){
			sum+=16*p;
		}else if(c=='C'){
			sum+=24*p;
		}else if(c=='B'){
			sum+=54*p;
		}else if(c=='A'){
			sum+=80*p;
		}else{
			sum+=10000*p;
		}
	}
	sum=sum*m-m*23;
	printf("%.4lf",sum);


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
