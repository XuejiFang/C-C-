#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,k;
    cin>>n>>k;
    if(n%(k+1)==0)
        cout<<"NO";
    else  
        cout<<"YES";
    system("pause");
    return 0;
}

//1 2 2 2 2 2 5 5 5 5 5
//0 0 5 0 0 5
//0 0 3 4 0 5 
// 3+3 +4 MIN*
// 3

// odd yes
// even and 2+k>=n no
// even and 2+k<n 不能取 1 和 n-k
// 8 5
// 3
// 5 3
// 

