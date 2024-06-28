/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 09:55:51 by saandria          #+#    #+#             */
/*   Updated: 2024/06/27 10:01:36 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	rev_wstr(char *str)
{
	int len;
	int j;
	int first_word = 1;

	len = 0;
	while (str[len] != '\0')
		len++;
	while (len >= 0)
	{
		while (len >= 0 && (str[len] == '\0' || str[len] == ' ' || str[len] == '\t'))
			len--;
		j = len;
		while (j >= 0 && str[j] != ' ' && str[j] != '\t')
			j--;
		if (first_word == 0)
			write(1, " ", 1);
		write(1, str + j + 1, len - j);
		first_word = 0;
		len = j;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);

	write(1, "\n", 1);
	return (0);
}