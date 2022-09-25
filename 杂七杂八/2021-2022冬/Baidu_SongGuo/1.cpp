#include <bits/stdc++.h>

using namespace std;

int main()
{
    char t;
    vector<int> nums;
    for(int i=0;i<3;i++){
        cin>>t;
        nums.push_back(t-'0');
    }
    for(int i=2;i>=0;i--)
        cout<<nums[i];
    
    system("pause");
    return 0;
}
