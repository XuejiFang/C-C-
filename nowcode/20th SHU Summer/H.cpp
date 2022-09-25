#include<bits/stdc++.h>
#define pb push_back
#define loop(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define int ll
#define mod 998244353
#define all(x) x.begin(),x.end()
#define endl '\n'
using namespace std;

int Next[100005];

void GetNext(string ch,int *next){
	int len=ch.size();
	next[0]=-1;
	int i=0,j=-1;
	while(i<len){
		if(!(~j)||ch[i]==ch[j]){
			next[++i]=++j;
		}else{
			j=next[j];
		}
	}
}

int KMP(string s,string p){
	int last=0;
	int slen=s.size(),plen=p.size();
	GetNext(p,Next);
	int j=0,i=0;
	while(i<slen){
		if(!(~j)||s[i]==p[j]){
			i++;j++;
		}else{
			j=Next[j];
		}
		if(j>=plen){
			j=Next[j];
			return i-plen;
		}
	}
	return -1;
}

void solve(){
/*
    int n;
    cin>>n;
    vector<int> nums(n);
    for(auto & x:nums)  cin>>x;
*/
	string s,subs;
	cin>>subs>>s;
//	if(KMP(s,subs)!=-1)	cout<<"YES"<<endl;
//	else	cout<<"NO"<<endl;
	cout<<KMP(s,subs)<<endl;	

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
