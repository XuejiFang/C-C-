#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,aa="edgnb";
    cin>>s;
    int len=s.size();
    map<char,bool> m;
    map<char,int> mindex;
    m['e']=m['d']=m['g']=m['n']=m['b']=0;
    int pos=-1;
    int indexpos=pos;
    bool flag=true;
    while(flag){
        m['e']=m['d']=m['g']=m['n']=m['b']=0;
        for(int i=(indexpos-10>=0?indexpos-10:0);i<len;i++){
            if(m[s[i]]==0){
                m[s[i]]=1;
                mindex[s[i]]=i;
                if(m['e']==1&&m['d']==1&&m['g']==1&&m['n']==1&&m['b']==1){
                    pos=i-4;
                    indexpos=pos;
                }
            }else{
                m['e']=m['d']=m['g']=m['n']=m['b']=0;
                i=mindex[s[i]];
            }
            if(pos!=-1){
                if(s.substr(pos,5)!=aa)
                    break;
                else
                    pos=-1;
            }
        }
        if(pos!=-1){
            if(s.substr(pos,5)==aa)
                flag=false;
            else{
                string tmp=s.substr(0,pos);
                tmp+=aa;
                tmp+=s.substr(pos+5,len-pos-5);
                s=tmp;
            }
        }else{
            flag=false;
        }
    }   
    cout<<s;
    system("pause");
    return 0;
}


//pos-10>=0?pos-10:0