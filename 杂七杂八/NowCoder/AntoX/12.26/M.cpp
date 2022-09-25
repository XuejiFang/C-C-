#include<iostream>
using namespace std;
#include <algorithm>
 
int main()
{
	int w[1005];			//商品的体积2、3、4、5
	int v[1005];			//商品的价值3、4、5、6
    int bagV,num;
    cin>>bagV>>num;
    for(int i=0;i<num;i++){
        cin>>w[i]>>v[i];  
    }				        //背包大小
		        //动态规划表
 	int dp[1005][1005] = { { 0 } };	
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= bagV; j++) {
			if (j < w[i])
				dp[i][j] = dp[i - 1][j];
			else
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
		}
	}
    cout<<dp[num][bagV];

    system("pause");
	return 0;
}