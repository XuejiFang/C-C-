#include<iostream>
#include<math.h>
using namespace std;

int num(int a,int x){
    int len=(int)log10(a)+1;
    int sum=0;
    for(int i=1;i<=len;i++){
        if(a%10==x)
            sum++;
        a/=10;
    }
    return sum;
}

int main(){
    int n,x;
    int i,sum=0;
    cin>>n>>x;
    for(i=1;i<=n;i++){
        sum+=num(i,x);
    }
    cout<<sum;

    return 0;
}


