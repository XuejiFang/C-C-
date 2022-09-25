#include<iostream>
using namespace std;
int main(){
    int n,tmp,total;
    while(cin>>n){
        tmp=1,total=0;
        for(int i=n;i>1;i--){
            tmp*=i;
        while(tmp%10==0){
            total+=1;
            tmp/=10;
            tmp%=100;
        }}
        cout<<total<<endl;
    }
    return 0;
}
