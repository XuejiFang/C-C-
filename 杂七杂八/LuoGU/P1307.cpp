#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,len,i,b=0;
    bool flag=false;
    cin>>a;
    if(a<0){
        a*=-1;
        flag=true;
    }
    len=(int)log10(a)+1;

    for(i=1;i<=len;i++){
        b=b*10+a%10;
        a/=10;
    }
    if(flag)
        cout<<-b;
    else
        cout<<b;
    return 0;
}



