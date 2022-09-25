#include<bits/stdc++.h>
using namespace std;

bool hui(string s){
    int len=s.size();
    for(int i=0;i<len/2;i++){
        if(s[i]!=s[len-i-1])
            return false;
    }
    return true;
}

string operator-(string s1,string s2){
    string wa="fangxueji",ss1;
    int len1=s1.size(),len2=s2.size();
    if(s2.size()<s1.size()){
        ss1=s1.substr(0,len2);
       // cout<<ss1<<" "<<s2<<endl;
        if(ss1==s2){
            return s1.erase(0,len2);
        }else   
            return wa;      
    }else if(s2.size()>s1.size()){
        ss1=s1.substr(0,len1);
       // cout<<ss1<<" "<<s1<<endl;
        if(ss1==s1){
            return s2.erase(0,len1);
        }else   
            return wa;      
    }else{
        if(s1==s2)
            return s1;
        else
            return wa;
    }

}

int main(){
    string s1,s2;
    while(cin>>s1>>s2){
        string ans;
        ans=s1-s2;
        cout<<s1.erase(0,1);
       // if(hui(ans))
         //   cout<<1<<endl;

    }


    system("pause");
    return 0;
}
