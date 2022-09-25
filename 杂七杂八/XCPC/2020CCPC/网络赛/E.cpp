#include<bits/stdc++.h>
using namespace std;
#define MAXSIZE 100000
int primeArr[MAXSIZE];
void prime();
int countPrime(int x);
int main() {
    prime();
    int T;
    cin>>T;
    while(T--){
        int n,a[11],sum=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=countPrime(a[i]);
        }    
        if((sum+n)%2==0)    cout<<"L"<<endl;
        else    cout<<"W"<<endl;
    }
    system("pause");
    return 0;
}

void prime() {
    int j=0;
    primeArr[j++]=2;
    for (int i, n = 3, tmp = 3; n<MAXSIZE; n += 2) {
        i = i = sqrt(n);
        if (i % 2 == 0)i -= 1;
        for (; i > 2; i -= 2)
            if (n%i == 0)break;
        if (i <= 2) {
            primeArr[j++]=n;
            tmp = n;
        }

    }
}

int countPrime(int x){
    int ans=0,i=0,flag=1;
    for(;i<MAXSIZE&&flag&&primeArr[i];){
        if(x%primeArr[i]==0){
            ans+=x/primeArr[i];
            flag=0;
        }else{
            i++;
        }
    }
    return ans;
}
