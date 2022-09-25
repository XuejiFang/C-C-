#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int a[maxn],b[maxn],c[maxn],d[maxn],n;
int find_pos(int x);

int main(){
    int T;
    cin>>T;
    while(T--){
        cin>>n;
        b[1]=0;
        cin>>a[1];
        for(int i=2;i<n;i++){
            b[i]=b[i-1]+a[i-1];
            cin>>a[i];
        }
        b[n]=b[n-1]+a[n-1];
        int delta=b[n]-b[1];
        for(int i=1;i<=n;i++)     c[i]=find_pos(i);
        for(int k=1;k<=n;k++){
            if(k==1)    d[k]=0;
            else if(k==2)   d[k]=delta;
            else if(k==3)   d[k]=2*delta;
            else if(k==4)   d[k]=3*delta+b[n-1]-b[2];
            else{
                d[k]=d[k-1]+delta+abs(b[c[k-2]]-b[c[k]])+abs(b[c[k]]-b[c[k-1]]);
            } 
            if(k%2==0&&k>4)  delta+=b[c[k]]-b[c[k-1]];
            cout<<d[k]<<" ";
        }
       
    }
    system("pause");
    return 0;
}

find_pos(int x){
    int pos;
    if(x%2==1)  pos=(x+1)/2;
    else pos=n-(x/2-1);
    return pos;
}