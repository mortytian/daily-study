#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main()
{
	int p1,p2;
	while((p1=fork())==-1);    
	if(p1==0)    	
				printf("b.My process ID is %d",getpid());
	else
	{
		while((p2=fork())==-1);
		if(p2==0)    			
					printf("c.My process ID is %d",getpid());
		else printf("a.My process ID is %d",getpid());
	}
} 


