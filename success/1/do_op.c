/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:24:21 by saandria          #+#    #+#             */
/*   Updated: 2024/06/20 12:30:31 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char *av[])
{
	int	a;
	int	b;
	int	x;
	
	if (ac == 4 && !av[2][1])
	{
		a = atoi(av[1]);
		b = atoi(av[3]);
		if (av[2][0] == '+')
			x = a + b;
		else if (av[2][0] == '-')
			x = a - b;
		else if (av[2][0] == '*')
			x = a * b;
		else if (av[2][0] == '/')
			x = a / b;
		else if (av[2][0] == '%')
			x = a % b;
		printf("%d", x);
	}
	printf("\n");
	return (0);
}
