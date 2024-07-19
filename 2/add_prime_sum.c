#include <unistd.h>

int	ft_atoi(char *n)
{
	int	i = 0 , res = 0 , sign = 1;

	while ((n[i] >= 9 && n[i] <= 13) || n[i] == 32)
		i++;
	if (n[i] == '+' || n[i] == '-')
	{
		if (n[i] == '-')
			sign = -1;
		i++;
	}
	while (n[i] && n[i] >= '0' && n[i] <= '9')
	{
		res = (res * 10) + (n[i] - '0');
		i++;
	}
	return (res * sign);
}

int	is_prime(int n)
{
	int	i = 2;

	while (i <= n / 2)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}
int	prime_sum(int n)
{
	int	res = 0;

	while (n > 1)
	{
		if (is_prime(n))
			res += n;
		n--;
	}
	return (res);
}

void	ft_putc(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putc('-');
		ft_putnbr(-n);
	}
	else if (n >= 0 && n <= 9)
		ft_putc(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int	main(int ac, char *av[])
{
	int	n , res = 0;

	if (ac == 2)
	{
		n = ft_atoi(av[1]);
		if (n <= 0)
		{
			write(1, "0\n", 2);
			return (0);
		}
		res = prime_sum(n);
		ft_putnbr(res);
		ft_putc('\n');
	}
	else
		write(1, "0\n", 2);
	return (0);
}
