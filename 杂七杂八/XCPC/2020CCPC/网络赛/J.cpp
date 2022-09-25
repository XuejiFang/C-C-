#include <bits/stdc++.h>
using namespace std;

const int maxn = 50 + 5;
int a[maxn];

int main()
{
    int t;
    scanf("%d", &t);
    int n;
    while (t--) {
        scanf("%d", &n);
        int flag = 0;
        memset(a,0,sizeof(a));
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        for (int i = 0; i < n-1; i++) {
            if (a[i] == a[i + 1]) {
                flag = 1;
                cout << "NO" << endl;
                break;
            }
        }
        if (!flag) cout << "YES" << endl;
    }
    return 0;
}
