#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet (void)
{
	char i;

	i = 97;
	while( i < 123)
	{
		ft_putchar(i);
		i = i + 1;
	}	
}

int 	main(void)
{
	ft_print_alphabet();
}