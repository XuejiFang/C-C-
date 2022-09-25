#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
    int a[50]={0},i=0,n=0,m=0,t=1,j,flg=1;
    double s=0;
    char x,b;
    while((x=getchar())&&x=='(')
    {
        n=0,m=0,s=0,i=0;
        do{
        if(x>='0'&&x<='9')
            {
                if(b>='0'&&b<='9')
                a[i-1]=(x-48)*flg+a[i-1]*10,flg=1;
                else
                a[i]=(x-48)*flg,i++,n++,flg=1;
            }
        else if(x=='\n')
                {n=i-m;break;}
        else if (x=='-')
            flg=-1;

        if((x==')')&&(m==0))
        {m=n;}
        b=x;
        }while(x=getchar());
        if(m==n)
        {for(i=0,j=m;i<m;i++,j++)
                s=s+a[i]*a[j];
        cout<<fixed<<setprecision(2)<<"Case "<<t<<": "<<s<<endl;}
        else
        cout<<fixed<<setprecision(2)<<"Case "<<t<<": none"<<endl;
        t++;
    }

    return 0;
}
