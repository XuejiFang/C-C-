#include<bits/stdc++.h>
using namespace std;


const int MAX=1e6+5;
string A[MAX],B[MAX];
bool hui(string s){
    string rs=s;
    reverse(s.begin(),s.end());
    return s==rs;
}

int main(){
    int n,m;
    cin>>n;
  //  vector<string> A,B;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>B[i];
    }
    /*
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        cout<<B[i]<<" ";
    }*/
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            string ans,reans;
            ans=A[i]+B[j];
            if(hui(ans))
                sum++;
        }
    }
    cout<<sum;

    system("pause");
    return 0;
}
