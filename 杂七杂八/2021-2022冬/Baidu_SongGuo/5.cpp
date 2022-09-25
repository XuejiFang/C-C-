#include<bits/stdc++.h>
using namespace std;

const int t[10]={1,2,5,10,12,23,43,50,120,122};

int FF(const int *t,int n)
{
    int tt;
    if(n==1){
        tt=t[0];
        return tt;
    }else if(n==2){
        tt=t[1];
        return tt;
    }else if(n==3){
        tt=t[0]+t[1]+t[2];
        return tt;
    }else{
        if(2*t[1]>t[0]+t[n-2])
            tt=2*t[0]+t[n-1]+t[n-2];
        else
            tt=t[0]+t[1]+t[n-1]+t[1];
        return tt+FF(t,n-2);
    }
}
int main()
{
    int p;
    cin>>p;
    cout<<FF(t,p);
    system("pause");
    return 0;
}
