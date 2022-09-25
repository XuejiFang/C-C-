#include<bits/stdc++.h>
using namespace std;

int fact(int n){
	if(n==1) return 1;
	else return n*fact(n-1);
}

int main(){
	 int x;
	 scanf("%d",&x);
     if(x<=0)
        cout<<0;
	 x = fact(x);//调用函数返回int值
	 printf("%d\n",x);
    system("pause");
    return 0;
}