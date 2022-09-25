#include<bits/stdc++.h>
using namespace std;
int atm(int indexn){
    int sum=0;
    for(int i=1;i<=316&&i*i<=indexn;i++){
        if(indexn%(i*i)==0)
            sum++;
    }
    return sum;
}

int main(){
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=atm(i);
        //cout<<i<<" "<<atm(i)<<endl;
    }
    cout<<sum;
    system("pause");
    return 0;
}

//1 2 2 2 2 2 5 5 5 5 5
//1+ 2+ 2+ 5
//0 0 5 0 0 5
//0 0 3 4 0 5 
// 0 1 2 3
// 3 4 5 6
// 5 5
// 3+3 +4 aa[i]*(len-i)
// 3      aa[i]*
// 1 2 2 5 5 
// 1 4 25 100
// odd yes
// even and 2+k>=n no
// even and 2+k<n 不能取 1 和 n-k
// 8 5
// 3
// 5 3
// 

