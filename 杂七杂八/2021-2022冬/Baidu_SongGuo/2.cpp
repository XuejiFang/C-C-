#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    double ans;
    ans=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    printf("%.3lf",sqrt(ans));
    
    system("pause");
    return 0;
}
