#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
const int mod=998244353;
string s1;
string s2="nunhehheh";
int a[maxn],h[maxn];
int t[maxn],m,n;
long long cns=0,ans=0;

int distinctOccurence(string s, string t, int starts, int startt, int m, int n) {
  //note argument k,l  are of no use here
  //initialize dp table
  int dp[m + 1][n + 1];
 
  //base cases
  for (int i = 0; i <= n; i++)
    dp[0][i] = 0;
 
  for (int i = 0; i <= m; i++)
    dp[i][0] = 1;
 
  //fill the dp table
  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      if (s[i - 1] == t[j - 1])
        dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
      else
        dp[i][j] = dp[i - 1][j];
    }
  }
 
  return dp[m][n];
}
 

int main(){
    int T;
    cin>>T;
    while(T--){
        memset(t,0,sizeof(t));
        cin>>s1;
        int j=1,k=0;
        for(int i=0;i<s1.length();i++){
            if(s1[i]=='a')  {
                a[j]++;
                if(s1[i+1]!='a'){
                   t[j]=t[j-1]+a[j];
                   j++;
                }    
            }else if(s1[i]=='h'){
                h[++k]=i;
            }
        }
        j--;
        //for(int i=1;i<=j;i++)   cout<<a[i]<<" "<<t[i]<<endl;
        //for(int i=1;i<=k;i++)   cout<<h[i]<<endl;
        int jj=0;
        cns=0;ans=0;
        for(int i=1;i<=j;i++){
            cns=(1<<t[i])-1;
            ans+=cns; 
        }

        /**/
        for(int i=1;i<=k;i++){
            int right=h[i];
            string tmp=s1.substr(0,right);
            cout<<tmp<<endl;
            m=tmp.length();
            n=s2.length();
            int num=distinctOccurence(tmp, s2, 0, 0, m, n);
            if(num){
                cns=(1<<t[j-jj])-1;
                //cns*=num;
                cout<<t[j-jj]<<" "<<num<<endl;
                ans+=cns;   
                jj++; 
            }
 
        }
        cout<<ans;
    }
    system("pause");
    return 0;
}