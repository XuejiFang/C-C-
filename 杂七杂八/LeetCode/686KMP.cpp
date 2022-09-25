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
        if(len1>len2)
            return -1;
        int start=KMP_Index(b,a),end;
        cout<<"start"<<" "<<start<<endl;
        int ans=0;
        cout<<b.substr(0,start)<<endl;
        if(b.substr(0,start).size()){
            if(KMP_Index(a,b.substr(0,start))==-1){
                cout<< -1;
            }else{
                ans++;
            }            
        }

        for(int i=start;i<len2;i++){
            if(b[i]!=a[(i-start)%len1]){
                cout<< -1;
            }
        }
        cout<<"len2 "<<len2<<endl;
        ans+=ceil(float(len2-start)/float(len1));
        cout<< ans;
    }

    system("pause");
    return 0;
}
