#include<bits/stdc++.h>
#define pb push_back
#define loop(i,a,b) for(int i=a;i<b;i++)
//#define ll long long
//#define int ll
#define mod 998244353
#define all(x) x.begin(),x.end()
#define endl '\n'
using namespace std;

string ss="0123456789ABCDEF";

string change(int n){
	string cns="";
	while(n){
		cns=ss[n%16]+cns;
		n/=16;
	}
	return cns;
}

int low(string ll){
	int l=0;
	bool flag=0;
	for(int i=0;i<ll.size();i++){
		int tmp;
		if(!flag&&ll[i]>='A'){
			tmp=9;
			flag=1;
		}else if(!flag){
			tmp=ll[i]-'0';
		}
		l=l*10+tmp;
	}
	return l;
}

int up(string ll){
	int l=0;
	bool flag=0;
	for(int i=0;i<ll.size();i++){
		int tmp;
		if(!flag&&ll[i]>='A'){
			tmp=0;
			flag=1;
			l++;
			l=l*10+tmp;
		}else if(!flag){
			tmp=ll[i]-'0';
			l=l*10+tmp;
		}else{
			l=l*10+tmp;
		}		
	}
	return l;
}

void solve(){
	int l,r;
	cin>>l>>r;
	string ll,rr;
	ll=change(l);
	rr=change(r);
	//cout<<ll<<" "<<rr<<endl;
//	cout<<change(l)<<" "<<change(r)<<endl;
	if(ll.size()==1&&ll[0]>='A'){
		l=10;
	}else{
		l=up(ll);
	}
	if(rr.size()==1&&rr[0]>='A'){
		r=0;
	}else{
		r=low(rr);
	}
	//cout<<l<<" "<<r<<endl;
	int ans=r-l+1>=0?r-l+1:0;
	cout<<ans<<endl;
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
/*
5 43
5
6
7
8
9
16
17
18
19
20
21
22
23
24
25
32
33
34
35
36
37
38
39
40
41
25
*/
