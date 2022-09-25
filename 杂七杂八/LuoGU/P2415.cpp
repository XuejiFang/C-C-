#include<bits/stdc++.h>
using namespace std;
const int maxn=35;
int a[maxn];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int i=0;
    long long sum=0,ans=1;
    while(scanf("%d",&a[++i])==1){
        sum+=a[i];
    }
    ans=ans<<i-2;
    ans*=sum;
    cout<<ans;


    system("pause");
    return 0;
}