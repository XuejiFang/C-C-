#include<bits/stdc++.h>
#define lowbit(x) ((x)&-(x))
using namespace std;
int tree[50001],N,M;
int MAX;

void update(int x,int d){
    while(x<=N){
        tree[x]+=d;
        x+=lowbit(x);
    }
}
/*
int query(int num,int b){
    while(num<=b){
        MAX=max(MAX,tree[num]);
        num+=lowbit(num);
    }
    return MAX;
}*/

int query(int a,int b){
    MAX=tree[a];
    for(int i=a+1;i<b;i++){
        MAX=max(MAX,tree[i+1]);
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    while(cin>>N>>M){
        memset(tree,0,sizeof(tree));
        int val;
        for(int i=1;i<=N;i++){
            cin>>val;
            update(i,val);
        }
        char s;
        int a,b;
        while(cin>>s>>a>>b&&M--){
           // MAX=0;
            if(s=='U')    {
                    update(a,b);
                for(int i=1;i<=N;i++)
                    cout<<tree[i]<<" ";
            }
            else if(s=='Q') cout<<query(a,b)<<endl;
            cout<<endl;
        }
    }

    return 0;
}

