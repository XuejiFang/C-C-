#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    char op;
    int N;
    cin>>N;
    while(N--){
        cin>>a>>op>>b;
        if(op=='+')
            cout<<a+b<<endl;
        else if(op=='-')
            cout<<a-b<<endl;
        else
            cout<<a*b<<endl;

    }
    system("pause");
    return 0;
}
