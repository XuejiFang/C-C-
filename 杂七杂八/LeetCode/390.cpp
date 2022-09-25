#include<bits/stdc++.h>
using namespace std;

int arr[10];

int FF(int n){
    bool flag=true;
    int s[n];
    for(int i=1;i<=n;i++){
        s[i-1]=i;
    }

    while(n>1){
        n/=2;
        if(flag){
            for(int i=0;i<n;i++){
                s[i]=s[2*i+1];
                cout<<s[i]<<" ";
            }
            s[n]='\0';
            cout<<endl;
            //cout<<s<<endl;            
        }else{
            reverse(s,s+n);
            for(int i=0;i<n;i++){
                s[i]=s[2*i+1];
                 
            }
             s[n]='\0';
            reverse(s,s+n);
                        for(int i=0;i<n;i++){
               
                cout<<s[i]<<" ";
            }
              cout<<endl;
           // cout<<s<<endl;
        }
        flag=!flag;
    }
    cout<<s[0];

}

int main(){
    int n;
    cin>>n;

    FF(n);
    system("pause");
    return 0;
}
