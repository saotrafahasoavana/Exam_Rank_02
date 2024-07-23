#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i = 0, start, end;

	if (ac > 1)
	{
		while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
			i++;
		start = i;
		while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
			i++;
		end = i;
		while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
			i++;
		if (av[1][i])
		{
			while (av[1][i])
			{
				if (av[1][i] <= 32)
				{
					if (av[1][i + 1] > 32)
						write(1, " ", 1);
				}
				else
					write(1, &av[1][i], 1);
				i++;
			}
			write(1, " ", 1);
		}
		while (start < end)
			write(1, &av[1][start++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
