#include <unistd.h>

void ft_print_reverse_alphabet(void);

int main()
{
	ft_print_reverse_alphabet();
}

void ft_print_reverse_alphabet(void)
{
	char c;
	for(int i=122; i>96; i--)
	{
		c = (char)i;
		write(1, &c, 1);
	}
}
