#include<bits/stdc++.h>
using  namespace std;
template <typename T> void Shell_Sort(T* a, int size) {
	int i, delta, value, indexi, indexj;
	T tmp;
	delta = size / 2;
	while (delta >= 1) {
		for (i = 0; i + delta < size; i++) {
			indexi = i;
			indexj = i + delta;
			while (indexi >= 0 && a[indexj] < a[indexi]) {
				tmp = a[indexj];a[indexj] = a[indexi];a[indexi] = tmp;
				//tmp = b[indexj];b[indexj] = b[indexi];b[indexi] = tmp;
				indexi -= delta;
				indexj -= delta;
			}
		}
		delta = delta / 2;
	}
}

int main(){
    int size=0;
    int a[1000];
    while(~scanf("%d",a+size)){
        size++;
    }
    Shell_Sort(a,size+1);
    for(int i=0;i<size;i++)
        cout<<a[i]<<endl;
    return 0;
}
