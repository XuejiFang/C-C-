#include<bits/stdc++.h>
using namespace std;

    int Next[10005]{0};
    void GetNext(string ch,int *next){
        //int len=strlen(ch);
        int len=ch.size();
        next[0]=-1;
        int i=0,j=-1;
        while(i<len){
            if(!(~j)||ch[i]==ch[j])  next[++i]=++j;
            else    j=next[j];
        }
    }
    int KMP_Index(string s,string p){
        int last=0;
       // int slen=strlen(s),plen=strlen(p);
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
        string a,b;
    while(cin>>a>>b){
        int len1=a.size(),len2=b.size();
        int ans=ceil(float(len2)/float(len1));
        string sa;
        for(int i=0;i<ans;i++)
            sa+=a;
        //cout<<sa<<endl;
        if(KMP_Index(sa,b)!=-1){
            cout<<ans;
        }else{
            sa+=a;
            ans++;
            if(KMP_Index(sa,b)!=-1){
                cout<<ans;
            }
            else{
                sa+=a;
                ans++;
                if(KMP_Index(sa,b)==-1){
                    cout<<-1;
                    continue;
                }
                else
                    cout<<ans;
            }

        }
    }

    system("pause");
    return 0;
}
