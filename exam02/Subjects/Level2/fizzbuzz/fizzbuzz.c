/*
AKIRA~adam zahraoui
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:15:08 by adam              #+#    #+#             */
/*   Updated: 2024/08/18 20:09:24 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int main()
{
    int a = 1;
    while(a <= 100)
    {
        if(a % 3 == 0 && a % 5 == 0)
            write(1, "fizzbuzz\n", 9);
        else if(a % 3 == 0)
            write(1, "fizz\n", 5);
        else if(a % 5 == 0)
            write(1, "buzz\n", 5);
        else
        {
            ft_putnbr(a);
            write(1, "\n", 1);
        }
        a++;
    }
}