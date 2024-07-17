/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:31:21 by saandria          #+#    #+#             */
/*   Updated: 2024/07/10 11:09:36 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    pgcd(unsigned int a, unsigned int b)
{
	unsigned int	tmp;

	while (b != 0)
	{
		tmp = b;
		b = a % b;
		a = tmp;
	}
	return (tmp);
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
	 unsigned int g;
    
    if (a == 0 || b == 0)
    	return (0);
    if (a > b)
		g = a;
	else
		g = b;
    while (1)
    {
        if ((g % a == 0) && (g % b == 0))
            return (g);
        g++;
    }
}
/*
int	main()
{
	printf("%d\n", lcm(-1, 2932));
}
*/
