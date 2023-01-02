#include<stdio.h>
#include<unistd.h>
#include<wait.h>
int main(){
        int pid;
        int status=-1;
        char *argv1[]={"ps","-l"};
        char *argv2[]={"shu"};
        char *env1[]={"school=SHU","course=OS","teacher=LFY","evaluation=GOOD",NULL};

        if((pid=fork())==0){    // child-1
                printf("\n<---Child-1 process start.\n\n");
                printf("Child-1: pid=%d, ppid=%d\n",getpid(),getppid());
                int GrandChildPid;
                int GChildStatus=-1;
                if((GrandChildPid=fork())==0){  //child-1-1
                        printf("GrandChild-1-1: Let me tell you current Process Status.\n");
                        execl("/bin/ps","ps","-l",NULL);
                }else{          // child-1
                        waitpid(GrandChildPid, &GChildStatus, 0);
                        printf("<---\nGrandChild-1-1 process end with exit status:%d.--->\n\n",WEXITSTATUS(GChildStatus));
                        printf("\nChild-1 process end.---->\n\n");
                }
        }else{                  // parent
                printf("\n<---Parent process start.\n\n");
                wait(&status);
                printf("Parent: I know that child-1 process has exited(%d), and exit status is %d\n",WIFEXITED(status),WEXITSTATUS(status));
                printf("I am parent, pid=%d, ppid=%d\n",getpid(),getppid());
                if(fork()==0){  // child-2
                        printf("Child2: Let me tell you current Process Status.\n");
                        execv("/bin/ps",argv1);
                }else{          // parent
                        wait(NULL);
                        if(fork()==0){  //child-3
                                if(fork()==0){  //child-3-1
                                        printf("Child-3-1: Let me show you current ENV.\n");
                                        execle("/bin/shu","shu",env1);
                                }else{  // child-3
                                        wait(NULL);
                                        printf("<----Child-3-1 end.--->\n");
                                        if(fork()==0){  // child-3-2
                                                printf("Child-3-2: Let me show you current ENV.\n");
                                                execve("/bin/shu",argv2,env1);
                                        }else{  // child-3
                                                wait(NULL);
                                                printf("<----Child-3-2 end.--->\n");
                                        }
                                }
                        }else{  // parent
                                wait(NULL);
                                printf("<---Child-3 end.\n--->");
                                printf("\nParent process end.--->\n\n");
                        }  
                }
        }



        return 0;
}