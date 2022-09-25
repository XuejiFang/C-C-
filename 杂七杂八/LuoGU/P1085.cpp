#include<iostream>
using namespace std;
int main(){
    int day=7;
    int a,b,index=0;
    int sum,tmp,max=0;
    while(day--){
        cin>>a>>b;
        sum=a+b;
        if(sum>8){
            if(max<sum){
                max=sum;
                index=7-day;
            }
        }
    }
    cout<<index;
    return 0;
}

