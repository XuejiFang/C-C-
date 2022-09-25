#include<bits/stdc++.h>
#define pb push_back
#define loop(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define int ll
#define mod 998244353
#define all(x) x.begin(),x.end()
#define endl '\n'

using namespace std;

const double pi=acos(-1.0);
const double eps=1e-8;

int sgn(double x){
	if(fabs(x)<eps)	return 0;
	else	return x<0?-1:1;
}

int dcmp(double x,double y){
	if(fabs(x-y)<eps)	return 0;
	else	return x<y?-1:1;
}


struct Point{
	double x,y;
	Point(){}
	Point(double x,double y):x(x),y(y){}
}; 

// double Distance(Point A,Point B)	return hypot(A.x-B.x,A.y-B.y);
double Distance(Point A,Point B){ return sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));}	

typedef Point Vector;

Point operator + (Point A,Point B){	return Point(A.x+B.x,A.y+B.y);}
Point operator - (Point A,Point B){	return Point(A.x-B.x,A.y-B.y);}
Point operator * (double k,Point A){ return Point(A.x*k,A.y*k);}
Point operator / (double k,Point A){ return Point(A.x/k,A.y/k);}
bool operator == (Point A,Point B){	return sgn(A.x-B.x)==0&&sgn(A.y-B.y)==0;}

double Dot(Vector A,Vector B){	return A.x*B.x+A.y*B.y;}
double Len(Vector A){	return sqrt(Dot(A,A));}
double Len2(Vector A){	return Dot(A,A);}
double Angle(Vector A,Vector B){	return acos(Dot(A,B)/Len(A)/Len(B));}
double Cross(Vector A,Vector B){	return A.x*B.y-A.y*B.x;}
double Area2(Point A,Point B,Point C){	return Cross(B-A,C-A);}
double Area(Point A,Point B,Point C){	return Area2(A,B,C)/2;}


void solve(){
/*
    int n;
    cin>>n;
    vector<int> nums(n);
    for(auto & x:nums)  cin>>x;
*/
	int R;
	double x,y,d;
	cin>>R;
	cin>>x>>y>>d;
	Point Q(x,y);
	double x1=x-d<-R?-R:x-d;
	double x2=x+d>R?R:x+d;
	double y1=sqrt(R*R-x1*x1),y2=sqrt(R*R-x2*x2);
	Vector M(x1,y1),N(x2,y2);
	
	double delta=Angle(M,N);
	double ans=delta*R;
	printf("%.12lf\n",ans);
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
