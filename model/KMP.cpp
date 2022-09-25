#include<bits/stdc++.h>

using namespace std;

int Next[100];

void GetNext(string ch,int *next){
    int len=ch.size();
    next[0]=-1;
    int i=0,j=-1;
    while(i<len){
        if(!(~j)||ch[i]==ch[j])  next[++i]=++j;
        else    j=next[j];
    }
}
int KMP(string s,string p){
    int last=0;
    int slen=s.size(),plen=p.size();
    GetNext(p,Next);
    int j=0,i=0;
    while(i<slen){
        if(!(~j)||s[i]==p[j]){
            i++;
            j++;
        }else
            j=Next[j];
        if(j>=plen)  {
                j=Next[j];
                return i-plen;
            }
    }
    return -1;
}


int main(){
	string s,subs;
	cin>>s;
	cin>>subs;
	cout<<KMP(s,subs);
	
	return 0;
}
