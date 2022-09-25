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

    int n;
	cin>>n;
	for(int i=1;i<=4*n+5;i++){
		for(int j=1;j<=13*n+19;j++){
			if(i==1||i==4*n+5){
				cout<<"*";
			}else if(i>=2&&i<=n+1||i>=3*n+4&&i<=4*n+4){
				if(j==1||j==13*n+19){
					cout<<"*";
				}else{
					cout<<".";
				}
			}else{
				
			}
		}
		cout<<endl;
	} */
	int n;
	cin>>n;
	char a[4*n+6][13*n+20];
	memset(a,'.',sizeof(a));
	for(int j=1;j<=13*n+19;j++){
		a[1][j]='*';
		a[4*n+5][j]='*';
	}
	for(int i=1;i<=4*n+5;i++){
		a[i][1]='*';
		a[i][13*n+19]='*';
	}
	for(int i=n+2;i<=3*n+4;i++){
		a[i][n+3]='@';
		a[i][3*n+5]='@';
		a[i][4*n+7]='@';
		a[i][7*n+11]='@';
	}
	for(int i=n+2;i<=2*n+2;i++){
		a[i][10*n+15]='@';

	}
	for(int i=2*n+3;i<=3*n+4;i++){
		a[i][12*n+17]='@';
	}
	for(int j=4*n+7;j<=6*n+9;j++){
		a[n+2][j]='@';
		a[2*n+3][j]='@';
	}
	for(int j=7*n+11;j<=9*n+13;j++){
		a[3*n+4][j]='@';
	}
	for(int j=10*n+15;j<=12*n+17;j++){
		a[n+2][j]='@';
		a[2*n+3][j]='@';
		a[3*n+4][j]='@';
	}
	for(int i=0;i<2*n+2;i++){
		a[n+3+i][n+4+i]='@';
	}
	for(int i=1;i<=4*n+5;i++){
		for(int j=1;j<=13*n+19;j++)	cout<<a[i][j];
		cout<<endl;
	}
}


signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int _test=1;
   // cin>>_test;
    while(_test--){
        solve();
    }
    return 0;
}
