/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:08:47 by saandria          #+#    #+#             */
/*   Updated: 2024/06/10 16:17:34 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*tab;
	int	len;
	int	i;

	if (end - start < 0)
		len = (end - start) * -1;
	else
		len = (end - start);
	tab = malloc(sizeof(int) * (len + 1));
	if (!tab)
		return (0);
	i = 0;
	while (i < len + 1)
	{
		if(end < start)
			tab[i] = end++;
		else
			tab[i] = end--;
		i++;
	}
	return (tab);
}
