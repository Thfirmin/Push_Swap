#include <stdio.h>

int	main(int argc, char *argv[])
{
	for (int i = 0; argv[1][i]; i ++)
		printf("%c", argv[1][i]);
	printf("\n");
	return (0);
}
