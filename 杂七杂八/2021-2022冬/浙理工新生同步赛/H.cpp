#include<bits/stdc++.h>
using namespace std;
int atm(int k,int indexi){
    int sum=0;
    bool flag=true;
    //cout<<indexi<<endl;
    while(indexi&&flag){
        if(indexi%10==k){
            sum++;
            flag=false;
            //cout<<indexi<<endl;
        }

        indexi/=10;
    }
    return sum;
}

int main(){
    int n,k,sum=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        sum+=atm(k,i);
    }
    cout<<sum;
    system("pause");
    return 0;
}