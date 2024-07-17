#include <unistd.h>

void	reverse(char *s)
{
	int	len = 0;
	int	i = 0;
	int	f = 1;

	while (s[len])
		len++;
	while (len >= 0)
	{
		while (len >= 0 && (s[len] == '\0' || s[len] == ' ' || s[len] == '\t'))
			len--;
		i = len;
		while (i >= 0 && (s[i] != ' ' && s[i] != '\t'))
			i--;
		if (f == 0)
			write (1, " ", 1);
		write(1, s + i + 1, len - i);
		f = 0;
		len = i;
	}
}

int	main(int ac, char *av[])
{
	if (ac == 2)
		reverse(av[1]);
	write(1, "\n", 1);
	return (0);
}