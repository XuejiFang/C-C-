#include <stdio.h>
#include <string.h>
void substr(char s[],char t[],int start,int n)
{   //把s串中从start下标开始共n个字符复制到t串中
    int i,j;
    for (i=start,j=0; s[i]!='\0' && j<n; i++,j++)
        t[j] = s[i];
    t[j]= '\0' ;
}
int main(void)
{
    char st[4][20]={"秋风萧瑟冻残叶","水映楼台见青云",
                    "依风倚月画里春","人称才子配佳人"};
    char s[80] = "", t[20];
   // int i,c;    //c为每行截取的汉字个数
   // printf("请输入每行从头获取汉字的个数：");
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





