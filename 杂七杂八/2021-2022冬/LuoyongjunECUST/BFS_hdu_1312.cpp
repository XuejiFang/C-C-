//BFS 遍历

#include <bits/stdc++.h>

using namespace std;

const int MAXN=25;
int sum,Hx,Hy;

char room[MAXN][MAXN];
int dir[4][2]={
    {-1,0},
    {0,-1},
    {1,0},
    {0,1}
};

struct node{
    int x,y;
};

#define CHECK(x,y) (x<Hx&&x>=0&&y<Hy&&y>=0)

void BFS(int x,int y){
    sum=1;
    queue<node> q;
    node start,next;
    start.x=x;
    start.y=y;
    q.push(start);
    while(!q.empty()){
        start=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            next.x=start.x+dir[i][0];
            next.y=start.y+dir[i][1];
            if(CHECK(next.x,next.y)&&room[next.x][next.y]=='.'){
                room[next.x][next.y]='#';
                sum++;
                q.push(next);
            }
        }
    }

}


int main()
{
    int x,y,sx,sy;
    while(cin>>Hx>>Hy){
        if(Hx==0&&Hy==0)
            break;
        for(y=0;y<Hy;y++){
            for(x=0;x<Hx;x++){
                cin>>room[x][y];
                if(room[x][y]=='@'){
                    sx=x;
                    sy=y;
                }
            }
        }
        BFS(sx,sy);
        cout<<sum<<endl;
    }


    system("pause");
    return 0;
}
