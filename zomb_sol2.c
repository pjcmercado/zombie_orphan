#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main()
{
	int i;
	pid_t child_pid;
	child_pid = fork();
	
	if (child_pid == 0)
	{
		for (i=0; i<20; i++)
		printf("This is Child Process: PID[%d]\n",getpid());
	}
	else
	{
		signal(SIGCHLD,SIG_IGN); //Solution 2: Ignoring SIGCHLD
		printf("This is Parent Process: PID[%d]\n",getpid());
		while(1);
	}
}
