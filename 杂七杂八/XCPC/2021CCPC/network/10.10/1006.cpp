#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
const int mod=998244353;
string s1;
string s2="nunhehheh";
int a[maxn],h[maxn];
 int t[maxn];
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
    int T,m,n;
    cin>>T;
    while(T--){
      memset(t,0,sizeof(t));
      memset(a,0,sizeof(a));
      ans=0,cns=0;
      cin>>s1;
      m = s1.length();
	    n = s2.length();
	    int num= distinctOccurence(s1, s2, 0, 0, m, n);
      cout<<num<<endl;
      int index;
      for(int i=s1.length()-1;i>=0&&num;i--){
        if(s1[i]=='h')          
          num--;
        index=i;
      }
      cout<<index<<endl;
      int j=0;
      for(int i=index;i<s1.length();i++){
        if(s1[i]=='a')  a[j]++;
        else if(s1[i]=='h'&&s1[i+1]=='a')
          j++;
      }
      cout<<j<<endl;

      for(int i=j;i>0;i--) t[i]=t[i+1]+a[i];
      for(int i=1;i<=j;i++) {
        cns=(1<<t[i])-1;
        cout<<t[i]<<" "<<cns<<endl;
        ans+=cns;
      }
      cout<<ans%mod<<endl;


/*
        int sum=0;
        long long cns=0,ans=0;
        for(int i=s1.length()-1;i>=0&&num;i--){
            if(s1[i]=='a')   sum++;
            else if(s1[i]=='h'){
                cns+=1<<sum;
                cns--;
                cns*=num;
                ans+=cns;
                cns=0;
                string cut=s1.substr(0,i);
                cout<<cut<<endl;
                m = cut.length();
                num=distinctOccurence(cut, s2, 0, 0, m, n);
                //cout<<sum<<" "<<num<<endl;
            }
        }

        cout<<ans%mod;
*/
    }

    system("pause");
    return 0;
}