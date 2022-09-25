#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int T;
    cin>>T;
    while(T--){
        int len;
        cin>>len;
        string s;
        cin>>s;
        int i;
        for(i=1;i<len;i++){
            if(s[i-1]<=s[i])
                break;
        }
        string cns=s.substr(0,i),ans;
        ans=cns;
        reverse(cns.begin(),cns.end());
        ans+=cns;
        //cout<<ans;

        for(i=1;i<len;i++){
            if(s[i-1]<s[i])
                break;
        }
        string cns2=s.substr(0,i),ans2;
        ans2=cns2;
        reverse(cns2.begin(),cns2.end());
        ans2+=cns2;
        if(ans<ans2)
            cout<<ans;
        else
            cout<<ans2;

        if(T)
            cout<<endl;
    }
    system("pause");
    return 0;
}