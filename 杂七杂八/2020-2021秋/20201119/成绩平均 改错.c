#include <stdio.h>
struct student
{
    char num[8];      //学号
    float  score;     //C语言成绩
};
float average(struct student s[], int n)
{
    int  j;
    float  aver=0.0;
    for (j=0; j<n; j++)
        aver = aver+s[j].score;
    aver = aver/n;
    return ;
}
void main()
{   struct student b[8]={ {"201",80},{"202",90},{"203",95},{"204",60},
                          {"205",63},{"206",74},{"207",80},{"208",76}};
    int i;
    float aver;
    aver = average( b,8);
    printf("\t学号\tC语言成绩\n");
    for (i=0; i<8; i++)
        printf("\t%s%12.2f\n",b[i].num,b[i].score);
    printf("班级平均成绩为%.2f\n",aver);
}

