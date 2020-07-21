
int		ft_iterative_factorial(int nb)
{
	int answer;

	answer = nb;
	while (nb > 1)
	{
		nb--;
		answer *= nb;
	}
	return (answer);
}
