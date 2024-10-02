/*
AKIRA~adam zahraoui
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:57:57 by adam              #+#    #+#             */
/*   Updated: 2024/08/19 12:12:47 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    if(argc == 2)
    {
        i = 0;
        while(argv[1][i] != '\0')
            i++;
        i--;
        while(argv[1][i] == ' ' || argv[1][i] == '\t')
            i--;
        while(argv[1][i] != ' ' && argv[1][i] != '\t')
            i--;
        i++;
        while(argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}