#include<bits/stdc++.h>
#define ll long long
#define int ll
#define pb push_back
#define endl '/n'
using namespace std;

double E(vector<int> nums){
    double sum=0.0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
    }
    return sum/nums.size();
}

double D(vector<int> nums){
    double EE=E(nums);
    double ans=0.0;
    for(int i=0;i<nums.size();i++){
        ans+=(nums[i]-EE)*(nums[i]-EE);
    }
    return ans/nums.size();
}

vector<double> GuiYi(vector<int> nums){
    double DD=sqrt(D(nums)),EE=E(nums);
    vector<double> ans;
    for(int i=0;i<nums.size();i++){
        ans.pb((nums[i]-EE)/DD);
    }
    return ans;
}

signed main(){
    int T;
    cin>>T;
    vector<int> nums(T);
    for(auto &x:nums)   cin>>x;

    vector<double> ans=GuiYi(nums);
    for(auto &x:ans){
        printf("%f\n",x);
    }

    return 0;
}