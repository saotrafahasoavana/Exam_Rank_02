/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:42:06 by saandria          #+#    #+#             */
/*   Updated: 2024/06/13 13:54:10 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_prime(unsigned int n)
{
	int	i;

	i = 2;
	while (i < n / 2)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char *av[])
{
	int	factor;
	int	first;
	unsigned int	n;

	if(ac == 2)
	{
		n = atoi(av[1]);
		if (n == 1)
			printf("%d", 1);
		factor = 2;
		first = 1;
		while(factor <= n)
		{
			if (n % factor == 0 && is_prime(factor))
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
	return(0);
}
