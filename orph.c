#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
 
int main()
{
   
    int pid = fork();
 
    if (pid > 0)
        printf("PID[%d]|Hi I'm Parent!\n",getpid());
 
    else if (pid == 0)
    {
        sleep(30);
        printf("PID[%d]|I'm the Child!\n",getpid());
    }
 
    return 0;
}
