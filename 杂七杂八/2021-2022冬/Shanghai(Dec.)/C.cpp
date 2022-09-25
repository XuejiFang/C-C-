#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    pair<int,int> p;
    stack<pair<int,int>> q;
    set<int> ccolor;
    ccolor.insert(0);
    map<int,int> color;
    color[0]=n;
    p.first=n;
    p.second=0;
    q.push(p);
    while(m--){
        int op;
        cin>>op;
        if(op==2){
            cout<<ccolor.size()<<endl;            
        }
        else{
            int x,y;
            cin>>x>>y;
            if(q.empty()){  
                p.first=x;
                p.second=y;
                q.push(p);
                color[y]+=x;
                ccolor.insert(y);
            }else if(x>=q.top().first){
                color[q.top().second]-=q.top().first;
                if(color[q.top().second]==0)
                    ccolor.erase(q.top().second);
                q.pop();
                p.first=x;
                p.second=y;
                q.push(p);
                color[y]+=x;
                ccolor.insert(y);
            }else{
                color[q.top().second]-=x;
                if(color[q.top().second]==0)
                    ccolor.erase(q.top().second);
                p.first=x;
                p.second=y;
                q.push(p);
                color[y]+=x;
                ccolor.insert(y);
            }
        }
    }


    system("pause");
    return 0;
}
/*
5 6
2
1 4 1   01111
1 2 2   01122
2
1 1 1   01121
2
5 6
2
1 4 1
1 2 2
2
1 1 1
2

000000
222222
211111
211222
211211

*/