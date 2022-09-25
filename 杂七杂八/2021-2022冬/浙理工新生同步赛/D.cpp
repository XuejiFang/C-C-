#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string aa="edgnb";
    cin>>s;
    int len=s.size();
    map<char,bool> m;
    map<char,int> mindex;
    m['e']=m['d']=m['g']=m['n']=m['b']=0;
    int pos;
    bool flag=true;
    while(flag){
        pos=-1;
        m['e']=m['d']=m['g']=m['n']=m['b']=0;
        for(int i=0;i<len;i++){
            if(m[s[i]]==0){
                mindex[s[i]]=i;
                m[s[i]]=1;
                if(m['e']==1&&m['d']==1&&m['g']==1&&m['n']==1&&m['b']==1){
                    pos=i-4;
                    
                }
            }else{
                m['e']=m['d']=m['g']=m['n']=m['b']=0;
                i=mindex[s[i]];
            }
            if(pos!=-1){
                int j;
                for(j=pos;j<=pos+4&&s[j]==aa[j-pos];j++){
                }  
                if(j<=pos+4){
                    break;
                }
            }    
        }
        int j;
        for(j=pos;j<=pos+4&&s[j]==aa[j-pos];j++){
        }  
        if(j>pos+4)
            flag=false;
        string tmp=s;
        for(int i=0;i<len;i++){
            if(i>=pos&&i<=pos+4){
                tmp[i]=aa[i-pos];
            }else{
                tmp[i]=s[i];
            }
        } 
       // cout<<tmp<<endl;   
        s=tmp;  

    }
    cout<<s;
    
    system("pause");
    return 0;
}