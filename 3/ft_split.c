#include <stdlib.h>
char *ft_strncpy(char *dest, char *src, int n)
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
	char **split;
	int	i = 0, j = 0, k = 0, words = 0;

	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			words++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	split = (char **)malloc(sizeof(char *) * (words + 1));
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
			split[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(split[k++], &str[j], i - j);
		//	k++;
		}
	}
	split[k] = NULL;
	return (split);
}

/*
#include <stdio.h>
int	main(void)
{
	char s[100] = "saotra 	andr    fah";
	char **res;

	res = ft_split(s);
	int i = 0;
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}		
}
*/
