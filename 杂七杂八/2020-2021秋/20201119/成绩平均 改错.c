#include <stdio.h>
struct student
{
    char num[8];      //ѧ��
    float  score;     //C���Գɼ�
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
    printf("\tѧ��\tC���Գɼ�\n");
    for (i=0; i<8; i++)
        printf("\t%s%12.2f\n",b[i].num,b[i].score);
    printf("�༶ƽ���ɼ�Ϊ%.2f\n",aver);
}

