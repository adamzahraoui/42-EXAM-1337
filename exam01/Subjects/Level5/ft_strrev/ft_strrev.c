/*
AKIRA~adam zahraoui
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:44:12 by adam              #+#    #+#             */
/*   Updated: 2024/08/18 20:07:43 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrev(char *str)
{
    int i = 0;
    int j = 0;
    while(str[i] != '\0')
        i++;
    i--;
    char dest;
    while(i > j)
    {
        dest = str[j];
        str[j] = str[i];
        str[i] = dest;
        i--;
        j++;
    }
    return str;
}

#include <stdio.h>

int main()
{
    char str[] = "adam";
    printf("%s", ft_strrev(str));
}