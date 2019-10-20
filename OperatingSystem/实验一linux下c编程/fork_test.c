#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>

int main()
{
	pid_t pid;
	pid=fork();
	if (pid<0)
		printf("error in fork!");
	else if (pid==0)
		printf("I am the child process, my process ID is %d\n", getpid());
	else
		printf("I am the parent process, my process ID is %d\n",getpid());
}

