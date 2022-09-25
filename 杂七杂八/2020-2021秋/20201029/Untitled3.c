    #include <stdio.h>
    #include <string.h>

    int main()
    {
        char a[100];
        int i,j,k;
        i=0;
        int count=0,flag=0;
        while((a[i]=getchar())!='\n') i++;
        a[i]='\0';
        for(j=0;j<=strlen(a)-1;j++)
        {
            if(a[j]!=' '&&flag==0)
            {
                count++;
                flag=1;
            }
            if(a[j]==' ') flag=0;
        }
        printf("%d\n",count);
        flag=0;
        for(j=0;j<=strlen(a)-1;j++)
        {
            if(a[j]!=' '&&flag==0&&a[j]>='a'&&a[j]<='z')
            {
                a[j]=a[j]-32;
                flag=1;
            }
            if(a[j]==' ') flag=0;
            printf("%c",a[j]);
        }
        printf("\n");


        return 0;
    }


