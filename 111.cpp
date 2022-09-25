#include<bits/stdc++.h>
#define pb push_back
#define loop(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define int ll
#define mod 998244353
#define all(x) x.begin(),x.end()
#define endl '\n'
using namespace std;

vector<vector<int> > nums;
int n,m;

//计算样本集合各元素个数
vector<int> Get_num_D(int col){     
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(nums[i][col]);
    }
    int N=s.size();
    vector<int> ans(N);
    for(int i=0;i<n;i++){
        ans[nums[i][col]]++;
    }
    return ans;
}

//计算Gini值
vector<double> Get_Gini(int col){   
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(nums[i][col]);
    }
    int N=s.size();
    vector<int> DD(N);
    for(int i=0;i<n;i++){
        if(nums[i][m-1])   DD[nums[i][col]-1]++; 
    }
    vector<int> num_D=Get_num_D(col);
    vector<double> Gini;
    for(int i=0;i<N;i++){
        double cns=1-(DD[i]/num_D[i])*(DD[i]/num_D[i])-((num_D[i]-DD[i])/num_D[i])*(((num_D[i]-DD[i])/num_D[i]));
        Gini.pb(cns);
    }
    return Gini;
}

// 计算Gini指数
double Get_Gini_index(vector<double> Gini,vector<int> num_D){   
    int sum=0;
    double ans=0.0;
    for(int i=0;i<num_D.size();i++) sum+=num_D[i];
    for(int i=0;i<Gini.size();i++){
        ans+=Gini[i]/sum*num_D[i];
    }
    return ans;
}

void solve(){   
    cin>>n>>m;
	
    for(int i=0;i<n;i++){
        vector<int> cns;
        for(int j=0;j<m;j++){
        	int x;
        	cin>>x;
        	cns.pb(x);
        }
        nums.pb(cns);
    }

    for(int i=0;i<nums.size();i++){
    	for(int j=0;j<nums[i].size();j++){
    		cout<<nums[i][j]<<" ";
    	}
    	cout<<endl;
    }

    vector<double> Gini_index;

    for(int j=0;j<m;j++){
    	vector<double> Gini=Get_Gini(j);
    	vector<int> num_D=Get_num_D(j);
    	
        Gini_index.pb(Get_Gini_index(Gini,num_D));
    }

    for(int i=0;i<Gini_index.size();i++){
        cout<<Gini_index[i]<<" ";
    }

    
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int _test=1;
   	cin>>_test;
    while(_test--){
        solve();
    }
    return 0;
}
