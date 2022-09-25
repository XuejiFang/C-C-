#include<bits/stdc++.h>
#define ll int 
#define pb push_back

using namespace std;

const int MAXN=8000;

ll C[MAXN][MAXN];


int main(){
	memset(C,0,sizeof(C));
	ll MAX=0;
	C[0][1]=1;
	for(int i=1;i<=MAXN-2;i++){
		for(int j=1;j<=i;j++){
			C[i][j]=C[i-1][j]+C[i-1][j-1];
			MAX=max(MAX,C[i][j]);
		}
	}
	ll x;
	cin>>x;
	ll index=1;
	for(int i=1;i<=MAXN-2;i++){
		for(int j=1;j<=i;j++){
			//cout<<C[i][j]<<" ";//=C[i-1][j]+C[i-1][j-1];
			if(C[i][j]==x){
				cout<<index;//<<endl;
				return 0;
				//break;
			}
			index++;
		}
		
	}
	//cout<<MAX;
	
	return 0;
}
