#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    queue<int>q1;
    queue<int>q2;
    int n,m,s=0;
    bool flag=true;
    cin>>n>>m;
    for(int i=1;i<=n;i++)   q1.push(i);
    while(!q1.empty()||!q2.empty()){
            if(++s%m==0) {
                if(flag){
                    cout<<q1.front()<<" ";
                    q1.pop();
                }else{
                    cout<<q2.front()<<" ";
                    q2.pop();
                }
            }
            if(flag){
                cout<<q1.front()<<" ";
                q2.push(q1.front());
                q1.pop();
            }else{
                cout<<q2.front()<<" ";
                q1.push(q2.front());
                q2.pop();
            }
            if(!q1.empty())     flag=true;
            else    flag=false;
    }

    return 0;
}


