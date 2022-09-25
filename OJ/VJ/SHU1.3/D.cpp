#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int n;
        cin>>n;
        vector<double> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        if(n<=2){
            cout<<0<<endl;
            continue;
        }
        int ans=n;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                double d = (v[j] - v[i]) * 1.0 / (j-i);
                int tmp=n;
                for(int k=0;k<n;k++){
                    if(abs(v[k] - (v[i] + (k-i) * d)) <= 1e-10)
                        tmp--;
                }
               
                ans=min(ans,tmp);
            }
        }
        cout<<ans<<endl;
            
    }
    

    system("pause");
    return 0;
}