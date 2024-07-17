/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:05:46 by saandria          #+#    #+#             */
/*   Updated: 2024/07/11 16:16:40 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	isprime(int c)
{
	int	i;

	i = 2;
	while ( i < c / 2)
	{
		if (c % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char *av[])
{
	int	n;
	int	factor;
	int	first;

	first = 1;
	if (ac == 2)
	{
		n = atoi(av[1]);
		if (n == 1)
		{
			printf("1\n");
			return (0);
		}
		factor = 2;
		while (factor <= n)
		{
			if (n % factor == 0 && isprime(factor))
			{
				if (first == 1)
					printf("%d", factor);
				else
					printf("*%d", factor);
				first = 0;
				n = n / factor;
			}
			else
				factor++;
		}
	}
	printf("\n");
	return (0);
}
