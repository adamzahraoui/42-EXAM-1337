/*
AKIRA~adam zahraoui
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:19:57 by adam              #+#    #+#             */
/*   Updated: 2024/08/20 12:03:53 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check2(char *dest, char *str, int j)
{
    int d = 0;
    while(str[d] != '\0')
    {
        if(dest[j] == str[d])
            return 0;
        d++;
    }
    return 1;
}

int check(char *sat, int i)
{
    int c = 0;
    while(c < i)
    {
        if(sat[i] == sat[c])
            return 0;
        c++;
    }
    return 1;
}

void    ft_union(char *str, char *dest)
{
    int i = 0;
    int j;
    while(str[i] != '\0')
    {
       if(check(str,i) == 1)
        {
            write(1, &str[i], 1);
        }
        i++;
    }
    j = 0;
    while(dest[j] != '\0')
    {
        if(check2(dest,str,j) == 1 && check(dest,j) == 1)
            write(1, &dest[j], 1);
        j++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        ft_union(argv[1],argv[2]);
    }
    write(1, "\n", 1);
}