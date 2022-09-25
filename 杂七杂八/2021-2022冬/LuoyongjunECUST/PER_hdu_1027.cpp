#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    while(cin>>n>>k){
        vector<int> nums;
        for(int i=1;i<=n;i++)
            nums.push_back(i);
        int sum=0;
        do{
            if(++sum==k)
                break;
        }while(next_permutation(nums.begin(),nums.end()));
        for(int i=0;i<n-1;i++)
            cout<<nums[i]<<" ";
        cout<<nums[n-1]<<endl;
    }



    system("pause");
    return 0;
}