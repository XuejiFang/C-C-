#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<int> d(n + 1);
    for (int i = 2; i <= n; i++)
    {
        int MAX = 0;
        for (int j = 1; j < i; j++)
        {
            MAX = max(MAX, max(j * (i - j), j * d[i - j]));
        }
        d[i] = MAX;
    }
    cout << d[n];
    system("pause");
    return 0;
}
