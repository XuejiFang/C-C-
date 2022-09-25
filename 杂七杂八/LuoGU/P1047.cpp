#include<bits/stdc++.h>
using namespace std;

template <typename T> void Shell_Sort(T* a,T* b,int size) {
	int i, delta, value, indexi, indexj;
	T tmp;
	delta = size / 2;
	while (delta >= 1) {
		for (i = 0; i + delta < size; i++) {
			indexi = i;
			indexj = i + delta;
			while (indexi >= 0 && a[indexj] < a[indexi]) {
				tmp = a[indexj];a[indexj] = a[indexi];a[indexi] = tmp;
				tmp = b[indexj];b[indexj] = b[indexi];b[indexi] = tmp;
				indexi -= delta;
				indexj -= delta;
			}
		}
		delta = delta / 2;
	}
}



int main(){
    int l,m;
    cin>>l>>m;
    int a[m+1],b[m+1];
    for(int i=1;i<=m;i++){
        scanf("%d%d",a+i,b+i);
    }

    Shell_Sort(b+1,a+1,m);
 cout<<endl;
for(int i=1;i<=m;i++){
        cout<<a[i]<<" "<<b[i]<<endl;
    }
    cout<<endl;
    int sum=0;
    for(int i=2;i<=m;i++){
        if(a[i]<=b[i-1])
            a[i]=min(a[i],a[i-1]);
        else
            sum+=b[i-1]-a[i-1]+1;
    }
    sum+=b[m]-a[m]+1;

   cout<<endl;
for(int i=1;i<=m;i++){
        cout<<a[i]<<" "<<b[i]<<endl;
    }  /*  */

    cout<<endl<<l-sum+1;
    return 0;
}
