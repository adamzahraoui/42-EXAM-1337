/*
AKIRA~adam zahraoui
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:33:30 by adam              #+#    #+#             */
/*   Updated: 2024/08/20 13:23:45 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int result;
    while(str[i] != '\0' && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }
    result = 0;
    while(str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
    {
        result = ((result * 10) + str[i]) - '0';
        i++;
    }
    return result * sign;
}