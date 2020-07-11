#include <unistd.h>

void	ft_Rush(char *str)
{
	int i;
	int j;
	char A[16] = {0};
	char map[4][4] = {0, 0};

	i = 0;
	while (str[i] != 0)
	{
		if (i % 2 == 1)
		{
			A[i] = str[i];
		}
		i++;
	}

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write(1, &map[i][j], 1);
			if (j < 3)
			{
				write(1, " ", 1);
			}
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(void)
{
	ft_Rush("4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2");
}
