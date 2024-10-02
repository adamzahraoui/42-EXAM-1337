/*
AKIRA~adam zahraoui
*/
#include <unistd.h>

int main(int argc, char **argv)
{
	int i = argc - 1;
	int j = 0;
	
	if(argc > 1)
	{
		while(argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}
