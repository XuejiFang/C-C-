#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,row=3;
    cin>>n;
    bool room[520][1040]={
        {0,0,0,1,0,0},
        {0,0,1,0,1,0},
        {0,1,0,1,0,1}
    };
    /**/
    for(int i=2;i<=n;i++){
        row=row*2-1;
        for(int j=0;j<row;j++){
            for(int k=0;k<2*row;k++){
                if()
                room[j][k]=room[j][k];
            }
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<2*row;j++){
            if(room[i][j])
                cout<<'*';
            else   
                cout<<' ';
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}
