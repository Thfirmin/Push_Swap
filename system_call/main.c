#include "sys_call.h"
#include <stdio.h>

int	main(int argc, char *argv[], char *envp[])
{
	sys_call(argc, argv, envp);
	if (sys_call(argc, argv, envp) == -1)
	{
		printf ("error!\n");
		return (2);
	}
	return (0);
}
