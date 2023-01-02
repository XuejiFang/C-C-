#include <unistd.h>
#include <stdio.h>

int main(intargc, char **argv, char **envp)
{
    printf("hellopid=%d\n", getpid());
    int i;
    for (i = 0; envp[i] != NULL; ++i)
    {
        printf("%s\n", envp[i]);
    }
    return0;
}
