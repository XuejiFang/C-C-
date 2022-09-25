#include<bits/stdc++.h>
using namespace std;

const double pi=acos(-1,0);
const double eps=1e-8;

int sgn(double x){
    if(fabs(x)<eps) return 0;
    else return x<0?-1:1;
}

int dcmp(double x,double y){
    if(fabs(x-y)<eps)   return 0;
    else return x<y?-1:1; 
}


struct Point{
    double x,y;
    Point(){}
    Point(double x,double y):x(x),y(y){}
};

typedef Point Vector;

double Cross(Vector A,Vector B){return A.x*B.y-A.y*B.x;}

double Polygon_area(Point *p,int n){
    double area=0;
    for(int i=0;i<n;i++)
        area+=Cross(p[i],p[(i+1)%n]);
    return area/2;
}

struct Line{
    Point p1,p2;
    Line(){}
    Line(Point p1,Point P2):p1(p1),p2(p2){}
    Line(Point p,double angle){
        p1=p;
        if(sgn(angle-pi/2)==0){p2=(p1+Point(0,1));}
        else{p2=(p1+Point(1,tan(angle)));}
    }
    Line(double a,double b,double c){
        if(sgn(a)==0){
            p1=Point(0,-c/b);
            p2=Point(-c/a,1);
        }else{
            p1=Point(0,-c/b);
            p2=Point(1,(-c-a)/b);
        }
    }
};

int Point_line_relation(Point p,Line v){
    int c=sgn(Cross(p-v.p1,v.p2-v.p1));
    if(c<0) return 1;       //在线左
    if(c>0) return 2;       //在线右
    return 0;               //在线上
}

int Line_relation(Line v1,Line v2){
    if(sgn(Cross(v1.p2-v1.p1,v2.p2-v2.p1))==0){
        if(Point_line_relation(v1.p1,v2)==0)    return 1;   //重合
        else    return 0;                                   //平行
    }
    return 2;                                               //相交
}

int main(){
    Point duo[3];
    for(int i=0;i<3;i++){
        double x,y;
        cin>>x>>y;
        duo[i].x=x;
        duo[i].y=y;
    }    
    cout<<Polygon_area(duo,3);
    cin>>


    system("pause");
    return 0;
}
