#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d;
    while(cin>>a>>b>>c>>d){
        int nums[4]={a,b,c,d};
        sort(nums,nums+4);
        do{
            bool flag=false;
            for(int i=0;i<4;i++)
                if(!flag&&nums[i]){
                    cout<<nums[i];
                    flag=true;
                }
                else if(flag)
                    cout<<nums[i];
            cout<<" ";
            if()
        }while(next_permutation(nums,nums+4));
    }

    system("pause");
    return 0;
}
