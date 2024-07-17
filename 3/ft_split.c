#include <stdlib.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char    **ft_split(char *str)
{
	char	**split;
	int	i = 0;
	int	j = 0;
	int	k = 0;
	int	words = 0;

	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			words++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	split = malloc(sizeof(char **) * (words + 1));
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			split[k] = malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(split[k++], &str[j], i - j);
			k++;
		}
	}
	split[k] = NULL;
	return (split);
}
/*
int	main(void)
{
	char *s = "saotra	  Fahasoavana 	Andrinome ";
	char **t = ft_split(s);
	int	i = 0;

	while (t[i])
	{
		printf("%s\n", t[i]);
		i++;
	}
}

*/