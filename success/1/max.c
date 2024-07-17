/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:28:07 by saandria          #+#    #+#             */
/*   Updated: 2024/07/12 11:24:33 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	unsigned int 	i;
	int	res;

	i = 0;
	res = 0;
	if (len > 0)
	{
		while(i < len)
		{
			if (res < tab[i])
				res = tab[i];
			i++;
		}
	}
	return (res);
}

int	main()
{
	int	tab[5] = {1, 2, 3, 4, 5};

	printf("%d\n", max(tab, 5));	
}
