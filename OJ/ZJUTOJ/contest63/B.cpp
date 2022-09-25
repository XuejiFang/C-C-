#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int sum=0;
        while(--N){
            int k;
            cin>>k;
            if(k==2){
                int a,b;
                cin>>a>>b;
                sum+=a+b;
            }else{
                vector<int> nums(k);
                while(k){
                    cin>>nums[--k];
                }
                sort(nums.begin(),nums.end());
                sum+=nums[0]+nums[1];
            }
        }
        cout<<sum<<endl;
    }
    system("pause");
    return 0;
}
