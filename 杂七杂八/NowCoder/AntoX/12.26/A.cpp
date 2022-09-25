#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
   
    cin>>n; 
    n--;
    int money[n],beauty[n];
    for(int i=0;i<n;i++){
        cin>>money[i];
    }
    for(int i=0;i<n;i++){
        cin>>beauty[i];
    }
    int ans=money[0],tmpbeauty=beauty[0];
    for(int i=1;i<n;i++){
        if(beauty[i]>tmpbeauty){
            if(i+1<n){
                if(beauty[i+1]>beauty[i]){
                    ans+=money[i+1];
                    tmpbeauty=beauty[i+1];
                }else if(beauty[i+1]<beauty[i]){
                    ans+=money[i];
                    tmpbeauty=beauty[i];
                }else{
                    ans+=min(money[i],money[i+1]);
                    tmpbeauty=beauty[i];
                }
            }
        }
    }
    cout<<ans;
    system("pause");
    return 0;
}
