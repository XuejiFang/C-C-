#include<iostream>
using namespace std;
int main(){
    int balance=0,sum=0;
    int income,outcome,index;
    bool flag=true;
    for(int i=1;i<=12;i++){
        cin>>outcome;
        income=balance+300-outcome;
        if(income<0&&flag){
            flag=false;
            index=i;
        }else{
            sum+=income/100;
            balance=income%100;
        }
    }
    if(flag)
        cout<<sum*100*1.2+balance;
    else
        cout<<-index;
    return 0;
}

