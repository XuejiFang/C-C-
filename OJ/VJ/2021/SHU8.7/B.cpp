#include<bits/stdc++.h>
using namespace std;
#define lowbit(x) ((x)&-(x))
int tree[100001],N;
void update(int num,int val){
    while(num>0){
        tree[num]+=val;
        num-=lowbit(num);
    }
}
int getsum(int num){
    int sum=0;
    while(num<=N){
        sum+=tree[num];
        num+=lowbit(num);
    }
    return sum;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int a,b;
    while(cin>>N&&N){
        memset(tree,0,sizeof(tree));
        for(int i=0;i<N;i++){
            cin>>a>>b;
            update(b,1);
            update(a-1,-1);
        }
        for(int i=1;i<N;i++){
            cout<<getsum(i)<<" ";
        }
        cout<<getsum(N)<<endl;
    }
    return 0;
}
