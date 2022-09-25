#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e6+100;
ll n,m,k,a[maxn];
int main(){
	int t;
	cin>>t;
	while(t--){
		ll sum=0,min_=1e9+10;
		scanf("%lld %lld %lld",&k,&n,&m);
		sum=m-1;
		for(int i=0;i<n;i++){
			scanf("%lld",&a[i]);
			sum+=2*abs(a[i]-m);
			min_=min(min_,a[i]);
		}
		sum=sum+min_-1-abs(min_-m);
		cout<<sum<<endl;
	}
}
