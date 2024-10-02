/*
AKIRA~adam zahraoui
*/
/*
AKIRA~adam zahraoui
*/
#include <unistd.h>

void print_even(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (i % 2 == 0)
            write(1, &str[i], 1);
        i++;
    }
}