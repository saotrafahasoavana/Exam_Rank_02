/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 14:37:17 by saandria          #+#    #+#             */
/*   Updated: 2024/06/21 08:33:20 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int in_base(int str_base, char c)
{
    char *base_u;
    char *base_l;
    int     i;

    base_u = "0123456789ABCDEF";
    base_l = "0123456789abcdef";
    i = 0;
    while (i < str_base)
    {
        if (base_u[i] == c || base_l[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int value(char c)
{
    if (c >= '0' && c <= '9')
        return (c - '0');
    if (c >= 'A' && c <= 'F')
        return ((c - 'A') + 10);
    if (c >= 'a' && c <= 'f')
        return ((c - 'a') + 10);
    return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
    int res;
    int sign;
    int i;

    res = 0;
    sign = 1;
    i = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] != '\0' && in_base(str_base, str[i]))
    {
        res = (res * str_base) + value(str[i]);
        i++;
    }
    return (res * sign);
}   
