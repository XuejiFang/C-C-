#include<iostream>
using namespace std;
const int delta=30;
int main(){
    int a[10],i;
    int height,sum=0;
    for(i=0;i<10;i++){
        cin>>a[i];
    }
    cin>>height;
    for(i=0;i<10;i++){
        if(height+delta>=a[i])
            sum++;
    }
    cout<<sum;
    return 0;
}


