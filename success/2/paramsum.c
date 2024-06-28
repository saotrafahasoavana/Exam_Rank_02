/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 06:46:34 by saandria          #+#    #+#             */
/*   Updated: 2024/06/28 06:52:14 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putc(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putc('-');
		ft_putnbr(-n);
	}
	if (n >= 0 &&n <= 9)
		ft_putc(n + '0');
	else
	{
		ft_putnbr(n % 10);
		ft_putnbr(n / 10);
	}
}

int	main(int ac, char *av[])
{
	ft_putnbr(ac - 1);
	write(1, "\n", 1);
	return (0);
}
