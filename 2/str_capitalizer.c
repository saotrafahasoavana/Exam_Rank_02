/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:22:25 by saandria          #+#    #+#             */
/*   Updated: 2024/06/11 11:35:46 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

void	str_cap(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		if ((s[i] >= 'a' && s[i] <= 'z') && is_space(s[i - 1]))
			s[i] -= 32;
		write(1, &s[i++], 1);
	}
}

int	main(int ac, char *av[])
{
	int	i;

	i = 1;
	if (ac == 1)
		write(1, "\n", 1);
	else
	{
		while (av[i])
		{
			str_cap(av[i++]);
			write(1, "\n", 1);
		}
	}
	return (0);
}
