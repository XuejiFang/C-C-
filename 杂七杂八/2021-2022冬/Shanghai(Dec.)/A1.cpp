#include<bits/stdc++.h>
using namespace std;
const int MAX=105;
string name[MAX];
double strength[MAX];

template <typename T> void Shell_Sort(T* a,string* name, int size) {
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
                string s;
                s = name[indexj];
				name[indexj] = name[indexi];
				name[indexi] = s;
				indexi -= delta;
				indexj -= delta;
			}
		}
		delta = delta / 2;
	}
}


int main(){
    int T;
    cin>>T;
    int index=0;
    for(int i=0;i<T;i++){
        string nname;
        cin>>nname;
        double sstrength;
        cin>>sstrength;
        if(nname!="morph"&&nname!="magnus"){
            name[index]=nname;
            strength[index]=sstrength;
            index++;
        }
    }
    Shell_Sort(strength,name,index);
    vector<string> v;
    for(int i=0;i<3;i++){
        v.push_back(name[i]);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<3;i++){
        cout<<v[i]<<endl;
    }
    system("pause");
    return 0;
}
