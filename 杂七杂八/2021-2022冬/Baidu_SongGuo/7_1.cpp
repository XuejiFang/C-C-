#include<bits/stdc++.h>
using namespace std;
int a[10005],b[10005],sum; 
int main()
{
    int n;
    scanf("%d",&n); 
    for(int i=1;i<=n;i++) 
    {
        scanf("%d",&a[i]); 
    }
    sort(a+1,a+n+1); 
    for(int i=1;i<=n;i++) 
    {
        scanf("%d",&b[i]);
    }
    sort(b+1,b+n+1); 
    for(int i=1,j=n;i<=n;i++,j--)
   
    {
        sum+=fabs(a[i]-b[j]); 
    }
    printf("%d\n",sum);
    system("pause");
    return 0; 
}