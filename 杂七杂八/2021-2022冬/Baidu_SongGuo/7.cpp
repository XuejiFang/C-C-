#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int >num1,num2;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        num1.push_back(t);
    }
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        num2.push_back(t);
    }
    sort(num1.begin(),num1.end());
    sort(num2.begin(),num2.end());
    int j=n-1;
    int sum=0;
    for(int i=n-1;i>=0;i--){
        if(num1[i]>num2[j]){
            sum++;
            j--;
        }
        else{
            j--;
            i++;
        }
    }
    
    cout<<sum;

    system("pause");
    return 0;
}
