#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int len;
        cin>>len;
        set<int> nums;
        for(int i=0;i<len;i++){
            int t;
            cin>>t;
            if(nums.find(t)!=nums.end())
                nums.insert(-t);
            else
                nums.insert(t);
        }
        cout<<nums.size()<<endl;
    }
    return 0;
}