#include <unistd.h>

void ft_putchar(char c);

int main()
{
	char c = 'A';
	ft_putchar(c);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}
