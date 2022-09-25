#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x0,y0,d,x,y;
    cin>>x0>>y0>>d;
    cin>>x>>y;
    double MAX=0,c;
    c=(x0-x)*(x0-x)+(y0-y)*(y0-y);
    MAX=max(MAX,c);
    c=(x0+d-x)*(x0+d-x)+(y0-y)*(y0-y);
    MAX=max(MAX,c);
    c=(x0-x)*(x0-x)+(y0-d-y)*(y0-d-y);
    MAX=max(MAX,c);
    c=(x0+d-x)*(x0+d-x)+(y0-d-y)*(y0-d-y);
    MAX=max(MAX,c);
    printf("%.3lf",sqrt(MAX));


    system("pause");
    return 0;
}
