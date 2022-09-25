#include <bits/stdc++.h>
using namespace std;
pair<double,double> p;
vector<pair<double,double>> v;

int main()
{
    double S,H;
    cin>>S>>H;
    int n;
    cin>>n;
    
    double sum=0;
    for(int i=0;i<n;i++)
    {   
        double t1,t2;
        cin>>t1>>t2;
        p.first=t1;
        p.second=t2;
        v.push_back(p);
        sum+=t2;
    }
    double time=0;
    for(int i=0;i<n;i++)
    {   
        time+=(H-v[i].first)*S/sum;
        H=v[i].first;
        sum-=v[i].second;
    }
    printf("%.10f",time);
    system("pause");
    return 0;
}