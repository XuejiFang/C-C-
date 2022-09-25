#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,x1,y1,x2,y2;
    cin>>N;
    x1=ceil((1+sqrt(1+8*N))/4);
    y1=N-(2*x1-3)*(x1-1);
    if(y1>2*x1-1)
        y1=4*x1-2-y1;
    cout<<y1<<"/";
    x2=ceil((-1+sqrt(1+8*N))/4);
    y2=N-(2*x2-1)*(x2-1);
    if(y2>2*x2)
        y2=4*x2-y2;
    cout<<y2;

    return 0;
}


