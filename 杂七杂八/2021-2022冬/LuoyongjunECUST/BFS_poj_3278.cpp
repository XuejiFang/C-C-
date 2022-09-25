//Catch That Cow
#include <bits/stdc++.h>

using namespace std;
int N,K;
#define CHECK(index) (index>=0&&index<2*k)

int dir[3]={-1,1,1};



int main()
{
    while(cin>>N>>K){
        queue<int> q;
        int start=N,next;
        q.push(start);
        int MIN=1e6,sum=0;
        while(!q.empty()){
            start=q.top();
            q.pop();
            for(int i=0;i<3;i++){
                if(i!=2)
                    next=start+dir[i];
                else    
                    next=start*2;
                if(CHECK(next)){
                    if(next==K)
                        MIN=min(MIN,sum);
                }else{
                    sum++;
                    q.push(next);
                }
            }

        }

    }
    
    
    system("pause");
    return 0;
}
