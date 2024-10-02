/*
AKIRA~adam zahraoui
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 23:10:01 by adam              #+#    #+#             */
/*   Updated: 2024/08/19 11:55:13 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    check(char *str, int i)
{
    int c = 0;
    while(c < i)
    {
        if(str[i] == str[c])
        {
            return 0;
        }
        c++;
    }
    return 1;
}

void    inter(char *str, char *dest)
{
    int i = 0;
    int j;
    while(str[i] != '\0')
    {
        j = 0;
        while(dest[j] != '\0')
        {
            if(str[i] == dest[j])
            {
                if(check(str,i) == 1)
                {
                    write(1, &str[i], 1);
                    break;
                }
            }
            j++;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        inter(argv[1],argv[2]);
    }
    write(1, "\n", 1);
}