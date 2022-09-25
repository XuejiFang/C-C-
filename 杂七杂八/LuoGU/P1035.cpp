#include<iostream>
using namespace std;
int main(){
    double sum=0;
    int i,k;
    bool flag=true;
    cin>>k;
    for(i=1;flag;i++){
        sum+=1/(double)i;
        if(sum>k)
            flag=false;
    }
    cout<<i-1;
    return 0;
}

