/*
AKIRA~adam zahraoui
*/
/*
AKIRA~adam zahraoui
*/
#include <unistd.h>

void print_odd(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (i % 2 != 0) // If the index is odd
            write(1, &str[i], 1);
        i++;
    }
}