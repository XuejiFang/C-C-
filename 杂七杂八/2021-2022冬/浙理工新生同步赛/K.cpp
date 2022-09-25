#include<bits/stdc++.h>
using namespace std;
const int MAX=5000+5;
int a[MAX];

bool find(int x,int index){
    for(int i=1;i<index;i++){
        if(a[i]==x)
            return true;
    }
    return false;

}

int main(){
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)   cin>>a[i];
    for(int index=2;index<=n;index++){
        bool flag=true;
        if(find(a[index],index)){
            sum++;
            continue;
        }
        for(int i=1;i<=index-1&&flag;i++){
            for(int j=1;j<=index-1&&flag;j++){
                if(find(a[i]^a[j]^a[index],index)){
                    flag=false;
                    sum++;
                }
            }
        }
    }
    cout<<sum;
    
    system("pause");
    return 0;
}