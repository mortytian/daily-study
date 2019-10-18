#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
int main()
{int i,j,k;

	if (i=fork())

	{j=wait(0);

		printf("Parent Process!\n");

		printf("i=%d,j=%d,k=%d\n",i,j,k);

	}

	else 

	{k=getpid();

		printf("Child Process!\n");

		printf("i=%d,k=%d\n\n",i,k);

	}

} 
