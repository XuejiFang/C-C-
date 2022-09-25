#include<bits/stdc++.h>
using namespace std;

int Mid(int x,vector<int> b,int n){
    int mid,left=0,right=n-1;
    while(left<right){
        mid=(left+right)/2;
        if(b[mid]<x)
            left=mid+1;
        else
            right=mid-1;
    }
    return left;
}


int main(){
    int n,L;
    cin>>n>>L;
    vector<int> a(n),b(n);
    vector<bool> bb(n,true);
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n;i++)    cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    int ans=0;
    for(int i=0;i<n;i++){
        int left=Mid(a[i],b,n);
        int cns1=abs(b[left]-a[i]);
        int cns2=abs(b[(left+1)%n]-a[i]);
        int cns3=abs(b[(left-1+n)%n]-a[i]);
        if(cns1<cns2&&cns1<cns3&&bb[left]){
            ans=max(ans,cns1);
            bb[left]=0;
        }else if(cns2<cns1&&cns2<cns3&&bb[(left+1)%n]){
            ans=max(ans,cns2);
            bb[(left+1)%n]=0;
        }else{
            ans=max(ans,cns3);
            bb[(left-1+n)%n]=0;
        }  
    }
    cout<<ans;

    system("pause");
    return 0;
}