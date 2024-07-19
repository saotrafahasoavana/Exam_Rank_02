void	swap_values(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	int swapped = 1;

	while (swapped == 1)
	{
		i = 0;
		swapped = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				swap_values(&tab[i], &tab[i + 1]);
				swapped = 1;
			}
			i++;
		}
	}
}
