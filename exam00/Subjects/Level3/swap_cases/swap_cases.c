/*
AKIRA~adam zahraoui
*/
/*
AKIRA~adam zahraoui
*/
char *swap_cases(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return str;
}