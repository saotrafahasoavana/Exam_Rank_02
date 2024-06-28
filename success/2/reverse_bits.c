#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int	i;
	unsigned char	res = 0;

	i = 0;
	while (i < 8)
	{
		res <<= 1;
		if (octet & 1)
			res |= 1;
		octet >>= 1;
		i++;
	}
	return (res);
}

void	print(unsigned char c)
{
	int	i = 7;
	char	bit;

	
}

int	main(void)
{
	char	c = reverse_bits('2');
	int	i = 7;
	char	bit;

	while (i >= 0)
	{
		bit = ((c >> i) & 1) + 48;
		write(1, &bit, 1);
		i--;
	}	
}
