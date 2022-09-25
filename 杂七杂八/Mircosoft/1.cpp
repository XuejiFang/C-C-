#include <bits/stdc++.h>
using namespace std;

int sum=0;
int Next(char c,int index,string S){
    if(c=='x'){
        for(int i=index+1;i<S.size();i++){
            if(S[i]=='y'){
                sum+=i-index;
                return i-index+1;
            }
            else if(S[i]=='x'){
                return i-index;
            }
        }
    }else{
        for(int i=index+1;i<S.size();i++){
            if(S[i]=='x'){
                sum+=i-index;
                return i-index+1;
            }
            else if(S[i]=='y'){
                return i-index;
            }
        }
    }
    return S.size()-index;
}
int solution(string &S) {
    for(int i=0;i<S.size();){
        if(S[i]=='x'||S[i]=='y'){
            i+=Next(S[i],i,S);
        }
        else
            i++;
    }
    int ans=S.size()-sum-1;
    return ans;
}




int main(){
    string S;
    while(cin>>S){
    cout<<solution(S);
    }


return 0;
}
