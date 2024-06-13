/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:26:15 by saandria          #+#    #+#             */
/*   Updated: 2024/06/13 11:32:05 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned int	pgcd(unsigned int a, unsigned int b)
{
	unsigned int	tmp;
	
	tmp = 0;
	while (b != 0)
	{
		tmp = b;
		b = a % b;
		a = tmp;
	}
	return (tmp);
}

int	main(int ac, char *av[])
{
	if (ac == 3)
	{
		printf("%d", pgcd(atoi(av[1]), atoi(av[2])));
	}
	printf("\n");
	return (0);
}
