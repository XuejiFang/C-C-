#include<bits/stdc++.h>
using namespace std;
vector<double> h,v;
int main(){
    double S,H;
    cin>>S>>H;
    int n;
    cin>>n;
    double vSum=0;
    for(int i=0;i<n;i++){
        double t1,t2;
        cin>>t1>>t2;
        h.push_back(t1);
        v.push_back(t2);
        vSum+=t2;
    }
    double time=0;
    double left=S*(H-h[0]);
    time+=left/vSum;
    vSum-=v[0];
    for(int i=1;i<n;i++){
        left=S*(h[i-1]-h[i]);
        if(vSum==0)
            break;
        time+=left/vSum;
        vSum-=v[i];
    }
    //cout<<fixed << setprecision(10)<<time;
    printf("%.10lf",time);
    system("pause");
    return 0;
}
