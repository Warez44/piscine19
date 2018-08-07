#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet (void)
{
	char i;

	i = 122;
	while( i > 96)
	{
		ft_putchar(i);
		i = i - 1;
	}	
}

int 	main(void)
{
	ft_print_alphabet();
}
