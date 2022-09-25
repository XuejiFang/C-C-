#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    dp[4] = 4;
    for (int i = 5; i <= n; i++)
    {
        int t = 0;
        for (int j = 1; j <= i - 1; j++)
            if (j * dp[i - j] > t)
                t = j * dp[i - j];
        dp[i] = t;
    }
    cout << dp[n] << endl;

    system("pause");
    return 0;
}
