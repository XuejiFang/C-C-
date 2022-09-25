#include<bits/stdc++.h>
const int MAXN=10000;
int height[MAXN],f[MAXN];

void init_set(){
	for(int i=0;i<MAXN;i++){
		f[i]=i;
		height[i]=0;
	}
}

int find_set(int x){
	if(x!=f[x])	f[x]=find_set(f[x]);
	return f[x];
}

void union_set(int a,int b){
	a=find_set(a);
	b=find_set(b);
	if(height[a]==height[b]){
		height[a]++;
		f[b]=a;
	}else{
		if(height[a]<height[b]){
			f[a]=b;
		}else{
			f[b]=a;
		}
	}
}


using namespace std;


int main(){
	int N,M,a,b;
	int j=1;
    while(cin>>N>>M && (N!=M) ){
        init_set();
        for(int i=0;i<M;i++){
            cin>>a>>b;
            union_set(a,b);
        }
        int ans=0;
        for(int i=1;i<=N;i++)
            if(f[i]==i) ans++;
        cout<<"Case "<<j++<<": "<<ans<<endl;
    }

	
	return 0;
}
