#include <stdio.h>
#include <string.h>
void substr(char s[],char t[],int start,int n)
{   //��s���д�start�±꿪ʼ��n���ַ����Ƶ�t����
    int i,j;
    for (i=start,j=0; s[i]!='\0' && j<n; i++,j++)
        t[j] = s[i];
    t[j]= '\0' ;
}
int main(void)
{
    char st[4][20]={"�����ɪ����Ҷ","ˮӳ¥̨������",
                    "�������»��ﴺ","�˳Ʋ��������"};
    char s[80] = "", t[20];
   // int i,c;    //cΪÿ�н�ȡ�ĺ��ָ���
   // printf("������ÿ�д�ͷ��ȡ���ֵĸ�����");
   // scanf("%d",&c);
   // for (i=0; i<4; i++)
   // {
    //    substr(st[i],t, 0,2*c);
     //   strcat(s,t);
   // }
   // puts(s);
    printf("%s",st[0][0]);


    return 0;
}





