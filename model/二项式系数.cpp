#include<bits/stdc++.h>

using namespace std;

const int N=100;
const int mod=998244353;

int inv[N],fac[N];
int C(int n,int m){return fac[n]*inv[n-m]%mod*inv[m]%mod;}
int A(int n,int m){return fac[n]*inv[n-m]%mod;}
void init(){
	inv[0]=fac[0]=inv[1]=1;
	for(int i=1;i<N;i++)	fac[i]=fac[i-1]*i%mod;
	for(int i=2;i<N;i++)	inv[i]=(mod-mod/i)*inv[mod%i]%mod;
	for(int i=1;i<N;i++)	inv[i]=inv[i-1]*inv[i]%mod;
}


int main(){
	init();
	int n,m;
	cin>>n>>m; 
	cout<<C[n][m]<<endl<<A[n][m];
	
	
	return 0;
}
