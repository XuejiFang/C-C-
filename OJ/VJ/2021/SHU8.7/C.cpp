#include<bits/stdc++.h>
#define lowbit(x) ((x)&-(x))
using namespace std;
int tree[50001],N;

void add(int x,int d){
    while(x<=N){
        tree[x]+=d;
        x+=lowbit(x);
    }
}

void sub(int x,int d){
    while(x<=N){
        tree[x]-=d;
        x+=lowbit(x);
    }
}

int sum(int num){
    int s=0;
    while(num>0){
        s+=tree[num];
        num-=lowbit(num);
    }
    return s;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int T,i=0;
    cin>>T;
    while(T--){
        cin>>N;
        cout<<"Case "<<++i<<":"<<endl;
        memset(tree,0,sizeof(tree));
        int val;
        for(int i=1;i<=N;i++){
            cin>>val;
            add(i,val);
        }
        string s;
        int a,b;
        while(cin>>s){
            if(s=="End")    break;
            cin>>a>>b;
            if(s=="Add")    add(a,b);
            else if(s=="Sub")   sub(a,b);
            else if(s=="Query") cout<<sum(b)-sum(a-1)<<endl;
        }
    }

    return 0;
}
