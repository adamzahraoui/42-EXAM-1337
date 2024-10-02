/*
AKIRA~adam zahraoui
*/
/*
AKIRA~adam zahraoui
*/
int occ_a(char *str)
{
    int count = 0;

    while (*str)
    {
        if (*str == 'A')
            count++;
        str++; 
    }

    return count;
}
