#include<iostream>
using namespace std;
const int mod=1e9+7;


int main(){
    int n,power;
    cin>>n>>power;
    int i,j,k;
    bool flag=false;
    long long a[n+1][n+1],sum=0;
    long long tmp[n+1][n+1],tmp0[n+1][n+1];
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>a[i][j];
            tmp[i][j]=a[i][j];
            tmp0[i][j]=a[i][j];
        }
    }
    while(power>1){
        if(power&1)
            flag=true;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                for(k=1;k<=n;k++){
                    sum+=((tmp[i][k]%mod)*(tmp[k][j]%mod))%mod;
                }
                a[i][j]=sum;
                sum=0;
            }
        }

        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                tmp[i][j]=a[i][j];
            }
        }
        power>>=1;
    }
    sum=0;
    if(flag){
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                for(k=1;k<=n;k++){
                    sum+=((a[i][k]%mod)*(tmp0[k][j]%mod))%mod;
                }
                a[i][j]=sum;
                sum=0;
            }
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
