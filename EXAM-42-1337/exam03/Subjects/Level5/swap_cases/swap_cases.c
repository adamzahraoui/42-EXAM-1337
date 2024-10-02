/*
AKIRA~adam zahraoui
*/
char *swap_cases(char *str)
{
    char *original = str; 
    while (*str) 
    {
        if (*str >= 'a' && *str <= 'z') 
            *str -= 32; 
        else if (*str >= 'A' && *str <= 'Z') 
            *str += 32; 
        str++; 
    }
    return original;
}