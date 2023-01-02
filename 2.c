#include <stdio.h>
#include <unistd.h>
#include <wait.h>
#include <stdlib.h>

int main()
{
    int pid_1, pid_2;
    int status_1 = -1, status_2 = -1;
    char *argv1[] = {"ps", "-l", NULL};
    char *argv2[] = {"shu", NULL};
    char *argv3[] = {"ls", NULL};
    char *env1[] = {"school=SHU", "course=OS", "teacher=LFY", "evaluation=GOOD", NULL};
    int p[2];
    pipe(p);
    int stdout_cp = 100;
    dup2(1, stdout_cp);

    if ((pid_1 = fork()) == 0)
    { // Child-1
        printf("\n\n<---Child-1: Strat, pid=%d, ppid=%d.\n\n", getpid(), getppid());

        if (fork() == 0)
        { // Child-1-1
            printf("Child-1-1: Let me show you current Process Status.\n");
            execl("/bin/ps", "ps", "-l", NULL);
        }
        else
        { // Child-1
            if (fork() == 0)
            { // Child-1-2
                printf("Child-1-2: Let me show you current Process Status.\n");
                execv("/bin/ps", argv1);
            }
            else
            {
                wait(NULL);
                printf("\n\nChild-1: End.--->\n\n");
                exit(0);
            }
        }
    }
    else
    { // Parent
        printf("<---Parent: Start.\n");
        waitpid(pid_1, &status_1, 0);
        printf("Parent: I know that Child-1 has exited(%d) with exit_status %d \n", WIFEXITED(status_1), WEXITSTATUS(status_1));

        if ((pid_2 = fork()) == 0)
        { // Child-2
            printf("\n\n<---Child-2: Start\n\n");
            exit(-1);
            printf("\n\nChild-2: End.--->\n\n");
        }
        else
        { // Parent
            waitpid(pid_2, &status_2, 0);
            printf("Parent: I know that Child-2 has exited(%d) with exit_status %d \n", WIFEXITED(status_2), WEXITSTATUS(status_2));

            if (fork() == 0)
            { // Child-3
                printf("<---Child-3: Start.\n\n");
                if (fork() == 0)
                { // Child-3-1
                    printf("Child-3-1: Let me show you current ENV.\n");
                    execle("/bin/shu", "shu", NULL, env1);
                }
                else
                { // Child-3
                    wait(NULL);
                    if (fork() == 0)
                    { // Child-3-2
                        printf("Child-3-2: Let me show you current ENV.\n");
                        execve("/bin/shu", argv2, env1);
                    }
                    else
                    { // Child-3
                        wait(NULL);
                        printf("\n\nChild-3: End.--->\n");
                    }
                }
            }
            else
            { // Parent
                wait(NULL);
                int tmp_pid, tmp_status = -1;
                if ((tmp_pid = fork()) == 0)
                { // Child-4
                    if (fork() == 0)
                    {                // Child-4-1
                        close(0);    // close standard input
                        dup(p[0]);   // duplicate pipe input port to standard input
                        close(p[0]); // close original pipe port
                        close(p[1]);
                        dup2(stdout_cp, 1);
                        execlp("sort", "sort", NULL);
                    }
                    else
                    {
                        if (fork() == 0)
                        {                // Child-4-2
                            close(1);    // close standard output
                            dup(p[1]);   // duplicate pipe output port to standard output
                            close(p[0]); // close original pipe port
                            close(p[1]);
                            execvp("ls", argv3);
                        }
                        else
                        { // Child-4
                            wait(NULL);
                            char ans[10000];
                            read(p[0], ans, sizeof(ans));
                            printf("Child-4: I got \"\n%s\" in the PIPE\n", ans);
                        }
                    }
                }
                else
                { // Parent
                    wait(NULL);
                    printf("\n\nParent: End.--->\n");
                }
            }
        }
    }
}