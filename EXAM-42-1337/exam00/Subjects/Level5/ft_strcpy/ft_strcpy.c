/*
AKIRA~adam zahraoui
*/
char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	while(s2[i] != '\0')
	{
		s1[j] = s2[i];
		i++;
		j++;
	}
	s1[j] = '\0';
	printf("%s",s1);
	return s1;

}

