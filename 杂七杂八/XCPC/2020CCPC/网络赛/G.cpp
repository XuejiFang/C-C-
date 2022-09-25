#include<bits/stdc++.h>
using namespace std;
const int maxn=26+1;
int a[maxn];

template <typename T> void Shell_Sort(T* a, int size) {
	int i, delta, value, indexi, indexj;
	T tmp;
	delta = size / 2;
	while (delta >= 1) {
		for (i = 0; i + delta < size; i++) {
			indexi = i;
			indexj = i + delta;
			while (indexi >= 0 && a[indexj] > a[indexi]) {
				tmp = a[indexj];
				a[indexj] = a[indexi];
				a[indexi] = tmp;
				indexi -= delta;
				indexj -= delta;
			}
		}
		delta = delta / 2;
	}
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int T,i=1;
	cin>>T;
	while(T--){
        memset(a,0,sizeof(a));
        string s;
        cin>>s;
        for(int j=0;j<s.length();j++)    a[s[j]-'a'+1]++;
        Shell_Sort(a,maxn);
        cout<<"Case #"<<i++<<": "<<a[0]<<endl;
	}
	return 0;
}

