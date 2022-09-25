#include <bits/stdc++.h>
#include <time.h>
using namespace std;
const int mod=1e6;

int func(int a,int b){
    int c;
    int sum=a+b;
    sum=sum%mod;
    c=mod-sum;
    return c;
}

bool If_func(int a,int b,int c){
    int sum=a+b+c;
    int cns=sum/mod;
    if(cns*mod==sum)    return 1;
    else    return 0;
}

int main(){
    int T,a,b,c;
    cin>>T;
    while(T--){
        //cin>>a>>b;
        srand(time(NULL));
        a=rand()%mod;
        b=rand()%mod;
        cout<<"a"<<a<<"b"<<b<<endl;
        c=func(a,b);
        if(c<0||c>=mod){
            cout<<"-1"<<endl;
        }else{
            cout<<c<<endl;
            if(If_func(a,b,c))     cout<<"True"<<endl;
            else    cout<<"False"<<endl;
        }
            
    }


    system("pause");
    return 0;
}