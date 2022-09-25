#include<bits/stdc++.h>
using namespace std;

int r,m,n;

int SUM(vector<vector<int>>& nums,int start_row,int col){
    int sum=0;
    for(int i=start_row-r/2;i<=start_row+r/2;i++){
        if(i>=m){
            if(col>=n)
                sum+=nums[m-1][n-1];
            else if(col<0)          
                sum+=nums[m-1][0];
            else
                sum+=nums[m-1][col];
        }else if(i<0){
            if(col>=n)
                sum+=nums[0][n-1];
            else if(col<0)          
                sum+=nums[0][0];
            else
                sum+=nums[0][col];
        }
        else{
            if(col>=n)
                sum+=nums[i][n-1];
            else if(col<0)         
                sum+=nums[i][0];
            else
                sum+=nums[i][col];
        }
    }

    //sum=sum/(r*r);
    return sum;
}



int main(){
    vector<int> cns;
    cin>>r>>m>>n;
    vector<vector<int>> nums,ans;
    int R=r*r;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int t;
            cin>>t;
            cns.push_back(t);
        }
        nums.push_back(cns);
        cns.clear();
    }
    cns.clear();

    //EXTEND(nums);

    for(int i=0;i<m;i++){
        int tmp_row=0;
        for(int j=0;j<n;j++){
            if(j==0){
                for(int jj=j-r/2;jj<=j+r/2;jj++)
                    tmp_row+=SUM(nums,i,jj);
                cns.push_back(tmp_row/R);
            }else{
                tmp_row-=SUM(nums,i,j-r/2-1);
                tmp_row+=SUM(nums,i,j+r/2);
                cns.push_back(tmp_row/R);
            }
        }
        ans.push_back(cns);
        cns.clear();
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }    
    system("pause");
    return 0;
}
