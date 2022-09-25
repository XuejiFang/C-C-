#include <bits/stdc++.h>

using namespace std;

int main()
{ 
    unsigned long long ans=1,n;

    cin>>n;
    if(n<=0){
        cout<<0;
        system("pause");
        return 0;
    }
        
    for(unsigned long long i=n;i>=1;i--){
        ans*=i;
    }
    cout<<ans;
    system("pause");
    return 0;
}
