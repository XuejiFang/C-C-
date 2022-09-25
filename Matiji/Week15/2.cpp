#include<bits/stdc++.h>
#define ll long long 
#define int ll

using namespace std;

const int M=1e7;

int prime[M+1];

bool visit[M+1];

int E_sieve(int n){
	int k=0;
	for(int i=0;i<n;i++)	visit[i]=0;
	
	for(int i=2;i<=n;i++){
		if(!visit[i]){
			for(int j=i*i;j<=n;j+=i)	visit[j]=1;
		}
	}
	for(int i=2;i<=n;i++){
		if(!visit[i]){
			prime[k++]=i;
		}
	}
	return k;
}

signed main(){
	int n,k;
	cin>>n;
	
	k=E_sieve(n);
	cout<<k<<endl<<endl;
	for(int i=0;i<k;i++){
		cout<<prime[i];
	}
	
	return 0;
}
