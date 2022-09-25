#include<bits/stdc++.h>
#define L(i, j, k) for(int i = (j); i <= (k); ++i)
#define R(i, j, k) for(int i = (j); i >= (k); --i)
#define ll long long
#define vi vector <int>
#define sz(a) ((int) (a).size())
#define me(f, x) memset(f, x, sizeof(f))
#define uint unsigned int
using namespace std;

const int N = 1e6 + 7;

int n, k, a[N];

map < int, int > mp;

int main() {
	ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> k;
	L(i, 1, n) {
		cin >> a[i];
		a[i] >>= k;
	}
		
		/**/
	for(int i=1;i<=n;i++)	cout<<a[i]<<" "<<mp[a[i]]<<endl;
	int lst = 0, ns = 0;
	L(i, 1, n) {
		cout<<mp[a[i]]<<endl;
		lst = max(lst, mp[a[i]]);
		mp[a[i]] = i;
		ns = max(ns, i - lst);
	}
	//cout << ns << '\n';
	//for(int i=1;i<=n;i++)	cout<<a[i]<<" ";
	return 0; 
}
