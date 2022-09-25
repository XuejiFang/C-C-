#include<bits/stdc++.h>
using namespace std;
bool hui(string s){
    string rs=s;
    reverse(s.begin(),s.end());
    return s==rs;
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
        ss1=s2.substr(0,len1);
       // cout<<ss1<<" "<<s1<<endl;
        if(ss1==s1){
            return s2.erase(0,len1);
        }else   
            return wa;      
    }else{
        if(s1==s2)
            return "a";
        else
            return wa;
    }

}

int main(){
    int n,m;
    cin>>n;
    vector<string> A,B;
    for(int i=0;i<n;i++){
        string t;
        cin>>t;
        A.push_back(t);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        string t;
        cin>>t;
        reverse(t.begin(),t.end());
        B.push_back(t);
    }
    /*
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        cout<<B[i]<<" ";
    }*/
    int sum=0;
    for(int i=0;i<A.size();i++){
        for(int j=0;j<B.size();j++){
            string ans,reans;
            ans=A[i]-B[j];
            //cout<<A[i]<<" "<<B[j]<<","<<ans<<","<<endl;
            if(ans!="fangxueji"&&hui(ans))
                sum++;
        }
    }
    cout<<sum;

    system("pause");
    return 0;
}
