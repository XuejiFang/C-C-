#include<bits/stdc++.h>
using namespace std;
vector<int> a;
void  st(int l,int r,int w){
    for(int i=l-1;i<r;i++){
        a[i]&=w;
    }
}

int main(){
    int n,m,tmp,l,r,w;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    for(int i=1;i<=m;i++){
        cin>>l>>r>>w;
        st(l,r,w);
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    system("pause");
    return 0;
}