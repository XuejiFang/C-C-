#include <bits/stdc++.h>
using namespace std;
const int maxn=10;
int a[maxn];

void func(int* a,int& N){
    sort(a,a+N,greater<int>());
    for(int i=0;i<N-1;i+=2){
        a[i]=abs(a[i]-a[i+1]);
    }
    
    N=ceil((float)N/2);
    for(int i=0;i<N;i++){
        a[i]=a[i*2];
    }
}

// 0 1 2
// 1 2 3
// 1 2 3
// 1 3

int main(){
    int T,N;
    cin>>T;
    while(T--){
        cin>>N;
        for(int i=0;i<N;i++)    cin>>a[i];
        while(N>1){
            func(a,N);
        }
        cout<<a[0]<<endl;

    }


    system("pause");
    return 0;
}