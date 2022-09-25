#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,d,a,numk=0,numd=0,numa=0;
    cin>>k>>d>>a;
    vector<char> nums;
    for(int i=1;i<=a;i++){
        nums.push_back('a');
        numa++;
    }
    for(int i=1;i<=d;i++){
        nums.push_back('d');
        numd++;
    } 
    for(int i=1;i<=k;i++){
        nums.push_back('k');
        numk++;
    } 
    if(5*k+2*a<25)
    {
        cout<<0;
        return 0;
    }
    //sort(nums.begin(),nums.end());
    int ans=0;
    do{
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]=='k')
                sum+=5;
            else if(nums[i]=='d')
                sum-=10;
            else
                sum+=2;
            if(sum<0)
                sum=0;
            else if(sum>25)
                sum=25;
        }
        if(sum==25)
            ans++;
    }while(next_permutation(nums.begin(),nums.end()));
    cout<<ans;
    system("pause");
    return 0;
}
