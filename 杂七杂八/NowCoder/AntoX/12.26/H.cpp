#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

int main(){
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    for(int i=4;i<1e7+2;i++){
        int t=nums[i-1]%mod+nums[i-3]%mod;
        nums.push_back(t%mod);
    }
    int x;
    cin>>x;
    cout<<nums[x];
    
    system("pause");
    return 0;
}
