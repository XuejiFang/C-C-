// you can use includes, for example:
// #include <algorithm>
#include <bits/stdc++.h>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

struct time{
    int hour,min;
}AA,BB;
    float ta=0,tb=0,delta;
void GetTime(string &A, string &B){
    int hour=0,min=0;
    for(int i=0;i<2;i++){
        hour=hour*10+A[i]-'0';
    }
    for(int i=3;i<5;i++){
        min=min*10+A[i]-'0';
    }
    AA.hour=hour;
    AA.min=min;

    hour=0,min=0;
    for(int i=0;i<2;i++){
        hour=hour*10+B[i]-'0';
    }
    for(int i=3;i<5;i++){
        min=min*10+B[i]-'0';
    }
    BB.hour=hour;
    BB.min=min;
}


int solution(string &A, string &B) {
    // write your code in C++14 (g++ 6.2.0)
    int ans=0;
    bool flag;
    GetTime(A,B);
    if(AA.hour<BB.hour||AA.hour==BB.hour&&AA.min<BB.min){
        flag=1;
    }else if(AA.hour==BB.hour&&AA.min==BB.min){
        return 0;
    }else{
        flag=0;
        ans+=4*24;

        int t=AA.hour;
        AA.hour=BB.hour;
        BB.hour=t;
        t=AA.min;
        AA.min=BB.min;
        BB.min=t;
    }

    if(AA.min<15){
        ta=AA.hour+0.25;
    }else if(AA.min<30){
        ta=AA.hour+0.5;
    }else if(AA.min<45){
        ta=AA.hour+0.75;
    }else{
        ta=AA.hour+1;
    }

    if(BB.min<15){
        tb=BB.hour;
    }else if(BB.min<30){
        tb=BB.hour+0.25;
    }else if(BB.min<45){
        tb=BB.hour+0.5;
    }else{
        tb=BB.hour+0.75;
    }

    delta=tb-ta;
    if(flag){
        ans+=delta/0.25;
    }else{
        ans-=delta/0.25;
    }
    return ans;
}

int main(){
    string A,B;
    cin>>A>>B;
    cout<<solution(A,B)<<endl;
    cout<<ta<<" "<<tb<<endl;
    cout<<AA.hour<<" "<<AA.min<<endl;
cout<<BB.hour<<" "<<BB.min<<endl;
cout<<delta;
    return 0;
}
