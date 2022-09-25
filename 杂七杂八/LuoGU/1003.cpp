#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
int main(){
    int x1,y1,x2,y2;
    int i,j;
    cin>>x1>>y1>>x2>>y2;
    bool pre[25][25];
    long long  suf[25][25];
    for(i=0;i<=x1;i++){
        for(j=0;j<=y1;j++){
            suf[i][j]=0;
            pre[i][j]=true;
        }
    }

    for(i=0;i<=x1;i++){
        for(j=0;j<=y1;j++){
            if((i-x2)*(i-x2)+(j-y2)*(j-y2)==5){
                pre[i][j]=false;
            }
        }
    }
    pre[x2][y2]=false;
    suf[0][0]=1;
    /*
    for(i=0;i<=x1;i++){
        for(j=0;j<=y1;j++){
             cout<<suf[i][j]<<" ";
        }
        cout<<endl;
    }*//*
    for(i=1;i<=x1;i++){
        for(j=1;j<=y1;j++){
               if(y2==0&&(j==y2&&i>x2
                ||j==y2+1&&i>x2+2
                ||j==y2+2&&i>x2+1)||x2==0&&(
                    i==0&&j>y2
                ||i==x2+1&&j>y2+2
                ||i==x2+2&&j>y2+1))
                    suf[i][j]=0;
        }
    }
*/


    i=0;j=0;
    while(pre[i][j]){
        suf[i][j]=1;
        i++;
    }

    i=0;j=0;
    while(pre[i][j]){
        suf[i][j]=1;
        j++;
    }

    for(i=1;i<=x1;i++){
        for(j=1;j<=y1;j++){
                if(pre[i][j])
                    suf[i][j]=suf[i-1][j]+suf[i][j-1];
        }
    }
    cout<<suf[x1][y1]<<endl;
/*
    for(i=0;i<=x1;i++){
        for(j=0;j<=y1;j++){
             cout<<pre[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=0;i<=x1;i++){
        for(j=0;j<=y1;j++){
             cout<<suf[i][j]<<" ";
        }
        cout<<endl;
    }*/
    return 0;
}
