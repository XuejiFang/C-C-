#include<bits/stdc++.h>
#define pb push_back
#define loop(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define int ll
#define mod 998244353
#define all(x) x.begin(),x.end()
#define endl '\n'
#define pi 3.141592653589793
using namespace std;

struct Point{
	double x,y;
	Point(){}
	Point(double x,double y):x(x),y(y){}
	} 
}; 

double Distance(Point A,Point B)	return hypot(A.x-B.x,A.y-B.y);

typedef Point Vector

Point operator + (Point B)	return Point(x+B.x,y+B.y);
Point operator - (Point B)	return Point(x-B.x,y-B.y);
Point operator * (double k) return Point(x*k,y*k);
Point operator / (double k) return Point(x/k,y/k);
Point operator == (Point B)	return sgn(x-B.x)==0&&sgn(y-B.y)==0;

double Dot(Vector A,Vector B)	return A.x*B.x+A.y*B.y;
double Len(Vector A)	return sqrt(Dot(A,A));
double Len2(Vector A)	return Dot(A,A);
double Angle(Vector A,Vector B)	return acos(Dot(A,B)/Len(A)/Len(B));
double Cross(Vector A,Vector B)	return A.x*B.y-A.y*B.x;
double Area2(Point A,Point B,Point C)	return Cross(B-A,C-A);
double Area(Point A,Point B,Point C)	return Area2/2;

void solve(){
/*
    int n;
    cin>>n;
    vector<int> nums(n);
    for(auto & x:nums)  cin>>x;
*/

}


signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int _test=1;
    cin>>_test;
    while(_test--){
        solve();
        cout<<endl;
    }
    return 0;
}
