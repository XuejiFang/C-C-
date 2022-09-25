#include<bits/stdc++.h>
using namespace std;
int main(){
    char c,t;
    t=getchar();
    int sum=0;
    while(~scanf("%c",&c)){
 
        if(t==':'&&c=='w')
            sum++;
        else{
            t=c;
        }
    }
    cout<<sum;
    system("pause");
    return 0;
}
