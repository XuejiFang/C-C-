#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float n,moun[3],price[3];
    int money=0x7fffffff,tmp,i;
    cin>>n;
    for(i=0;i<3;i++){
        cin>>moun[i]>>price[i];
        tmp=ceil(n/moun[i])*price[i];
        if(tmp<money)
            money=tmp;
    }
    cout<<money;

    return 0;
}

