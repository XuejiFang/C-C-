#include<bits/stdc++.h>

using namespace std;

const int N = 2100;
const int mod = 1e9+7;
int C[N][N],A[N][N];
void init(){
	for(int i=0;i<N;i++)
		for(int j=0;j<=i;j++){
			if(j==0) C[i][j]=1;
			else C[i][j]=(C[i-1][j-1]+C[i-1][j])%mod;
		}
	for(int i=0;i<N;i++)
		for(int j=0;j<=i;j++){
			if(j==0) A[i][j]=1;
			else A[i][j]=(i*A[i-1][j-1])%mod;
		}	
}

int main(){
	init();
	int n,m;
	cin>>n>>m;
	cout<<C[n][m]<<endl<<A[n][m];
	
	
	return 0;
}
