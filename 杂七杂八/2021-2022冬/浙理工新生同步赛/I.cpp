#include<bits/stdc++.h>
using namespace std;
int atm(int indexn){
    map<int,int> m;
    //m[1]=1;
    for(int i=2;indexn!=1;){
        if(indexn%i==0){
            m[i]++;
            indexn/=i;
            //cout<<i<<" ";
        }else
            i++;
    }
    int sum=1;
    map<int, int>::iterator iter;
    vector<int> aa,a;
    for(iter = m.begin(); iter !=m.end(); iter++){
        sum+=iter->second/2;
        aa.push_back(iter->second);
    }
    sort(aa.begin(),aa.end());
    for(int i=0;i<aa.size();i++){
        if(aa[i]!=1)
            a.push_back(aa[i]);
    }
    
    if(a.size()==2){
        sum+=a[0];
    }else if(a.size()==3){
        sum+=a[0]*3+a[1];
    }
       // cout<<aa[i]<<" ";

    //cout<<"sum  ";
    /*
    if(aa.size()>=2){
        for(int i=0;i<aa.size();i++){
            sum+=aa[i]*(aa.size()-i);
        }        
    }
    if(aa.size()==3)
        sum+=aa[0];*/

    return sum;
}

int main(){
    int sum=0;
    int n;
   // cin>>n;
    for(int i=1;i<=100;i++){
        cout<<i<<" "<<atm(i)<<endl;
    }
    //cout<<sum;
    //atm(100000);
    system("pause");
    return 0;
}

//1 2 2 2 2 2 5 5 5 5 5
//1+ 2+ 2+ 5
//0 0 5 0 0 5
//0 0 3 4 0 5 
// 0 1 2 3
// 3 4 5 6
// 5 5
// 3+3 +4 aa[i]*(len-i)
// 3      aa[i]*
// 1 2 2 5 5 
// 1 4 25 100
// odd yes
// even and 2+k>=n no
// even and 2+k<n 不能取 1 和 n-k
// 8 5
// 3
// 5 3
// 

