#include<stdio.h>
#include<math.h>

int main(){
    float x,y;
    int n,t;
    n=1;
    while(scanf("%f %f",&x,&y)==2){
        //if(x<0&&y>0)
          //  printf("Case %d: %.2f\n",n,atan(y/x)*180.0/3.1415926+180.0);
        //else if(x<0&&y<=0)
          //  printf("Case %d: %.2f\n",n,atan(y/x)*180.0/3.1415926-180.0);
        //else
        printf("Case %d: %.2f\n",n,atan2(y,x)*180.0/3.1415926);
        n++;
    }
    return 0;
}
