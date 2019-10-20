#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>

int main()
{int m,n,k;
	m=fork();
	printf("PID:%d\t",getpid());
	printf("The return value of fork():%d\t\t",m);
	printf("he\n");
	n=fork();
	printf("PID:%d\t",getpid());
	printf("The return value of fork():%d\t\t",n);
	printf("ha\n");
	k=fork();
	printf("PID:%d\t",getpid());
	printf("The return value of fork():%d\t\t",k);
	printf("ho\n");
} 
