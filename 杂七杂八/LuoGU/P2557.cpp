#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long  LL;

LL fastPower(LL base,LL power){
    LL result=1;
    while(power>0){
        if(power&1){
            result=result*base;
        }
        power>>=1;
        base=(base*base);
    }
    return result;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    LL n,k;
    cin>>n>>k;
    LL ans=fastPower(n,k),sum=0;
    for(int i=1;i<sqrt(ans);i++){
        if(ans%i==0)   sum+=i+ans/i;
    }
    if(ans%(int)sqrt(ans)==0)    sum+=(int)sqrt(ans);
    cout<<sum<<endl;
    system("pause");
    return 0;
}