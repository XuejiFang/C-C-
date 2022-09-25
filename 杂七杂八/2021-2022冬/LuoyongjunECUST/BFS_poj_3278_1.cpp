#include <iostream>
#include <cmath>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

double  sum=0;
vector<double> nums;
int dir[2]={-1,1};

struct node{
    int x;
};
queue<node> q;
#define CHECK(x) (x>=0)


int N,K;

void BFS(int x){
    sum=0;

    node start,next;
    start.x=x;
    q.push(start);
    while(!q.empty()){
        start=q.front();
        q.pop();
        for(int i=0;i<2;i++){
            next.x=start.x+dir[i];
            /*
            if(next.x>K){
                nums.push_back(sum+next.x-K);
                continue;
            }*/
            if(CHECK(next.x)){
                q.push(next);                
                sum++;
                if(next.x==K)
                    return;
            }
        }
        next.x=2*start.x;
        /*
        if(next.x>K){
            nums.push_back(sum+next.x-K);
            continue;
        }*/
        if(CHECK(next.x)){
            q.push(next);
            sum++;
            if(next.x==K)
                return;
        }
                
    }

}


int main()
{        
    while(cin>>N>>K){
        if(N==K){
            cout<<0<<endl;
            continue;
        }
        while(!q.empty()) q.pop();
        BFS(N);
        //sort(nums.begin(),nums.end());

    // sum=min(sum,nums[0]);
        double ans=log(sum)/log(3.0);
        cout<<ceil(ans)<<endl;        
    }


    system("pause");
    return 0;
}