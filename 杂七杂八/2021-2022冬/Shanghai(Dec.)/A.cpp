#include<bits/stdc++.h>
using namespace std;
bool FF(pair<string,double> p1,pair<string,double> p2){
    return p1.second>p2.second;
}
int main(){
    int T;
    cin>>T;
    vector<pair<string,double>> v;
    pair<string,double> p;
    int index=0;
    for(int i=0;i<T;i++){
        string name;
        cin>>name;
        double strength;
        cin>>strength;
        if(name!="morph"||name!="magnus"){
            p[name]=strength;
            v.push_back(p);
        }
    }
    
    sort(v.begin(),v.end(),FF);
    cout<<v[0].first;
    system("pause");
    return 0;
}
