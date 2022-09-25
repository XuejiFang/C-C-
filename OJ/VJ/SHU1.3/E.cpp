#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,L;
    cin>>n>>L;
    vector<int> a(n),b(n);
    vector<bool> all(3*L),bb(L);
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n;i++)    {cin>>b[i];all[b[i]-1]=1;all[b[i]-1+L]=1;all[b[i]-1+2*L]=1;}
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ans=0;
    for(int i=0;i<n;i++){
        int cns=0;
        while(all[a[i]+L-1+cns]==0&&all[a[i]+L-1-cns]==0){
            cns++;
        }
        if(all[a[i]+L-1+cns]==1){
            all[a[i]+L-1+cns]==0;
            all[(a[i]+L-1+cns+2*L)%(3*L)]==0;
            all[(a[i]+L-1+cns+L)%(3*L)]==0;
            all[(a[i]+L-1+cns+3*L)%(3*L)]==0;
        }else if(all[a[i]+L-1-cns]==1){
            all[a[i]+L-1-cns]==0;
            all[(a[i]+L-1-cns+2*L)%(3*L)]==0;
            all[(a[i]+L-1-cns+L)%(3*L)]==0;
            all[(a[i]+L-1-cns+3*L)%(3*L)]==0;
        }
        ans=max(ans,cns);
    }
    cout<<ans;

    system("pause");
    return 0;
}