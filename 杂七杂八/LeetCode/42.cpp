#include<bits/stdc++.h>
using namespace std;
int trap(vector<int>& height) {
    int index1=-1,index2=-1,sum=0;
    bool flag=1;
    while(flag){
        flag=0;
        index1=index2=-1;
        int len=height.size();
        for(int i=0;i<len;i++){
            if(height[i]){
                if(index1==-1) index1=i;
                else if(index2==-1)    index2=i;
                if(index1!=-1&&index2!=-1){
                    sum+=index2-index1-1; 
      
                    index1=index2=-1;
                }
                --height[i];
                flag=1;
            }
        }   
    }
    return sum;
}
int main(){
    vector<int> height={0,1,0,2,1,0,1,3,2,1,2,1};
    int ans=trap(height);
    cout<<ans;

    system("pause");
    return 0;
}



