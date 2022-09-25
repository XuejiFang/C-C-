#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int len;
    float a;
    cin>>a;
    a=a*10;
    len=log10(a);
    cout<<(int)a%10;
    a/=10;
    cout<<'.';
    for(int i=1;i<=len;i++){
        cout<<(int)a%10;
        a/=10;
    }
    return 0;
}
