#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e5+5;

int nextval[MAXN]{0};

void get_nextval(string p){
    int len=p.length();
    int i=1,j=0;
    nextval[1]=0;
    while(i<len){
        if(j==0||p[i-1]==p[j-1]){
            ++i;++j;
            if(p[i-1]!=p[j-1])
                nextval[i]=j;
            else
                nextval[i]=nextval[j];
        }else
            j=nextval[j];
    }
    for(int i=1;i<=len;i++)
        cout<<nextval[i]<<" ";
    cout<<endl;
}

int Index_KMP(string s,string p,int nextval[]){
    get_nextval(p);
    int i=1,j=1;
    while(i<=s.length()&&j<=p.length()){
        if(j==0||s[i-1]==p[j-1]){
            ++i;++j;
        }else
            j=nextval[j];
    }
    if(j>p.length())
        return i-p.length();
    else
        return 0;
}

int main(){
    string s,p;
    cin>>s>>p;
    cout<<Index_KMP(s,p,nextval);
    system("pause");
    return 0;
}
