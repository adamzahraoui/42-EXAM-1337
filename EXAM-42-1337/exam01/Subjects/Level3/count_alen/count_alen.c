/*
AKIRA~adam zahraoui
*/
int count_alen(char *str)
{
    int length = 0;

    while (str[length]) 
    {
        if (str[length] == 'a') 
            return length; 
        length++; 
    }

    return length;
}