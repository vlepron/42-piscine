#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(void)
{
	char i;

	i = 48;
	while (i<=57)	
	{	
		ft_putchar(i);
		i++;
	}
}

int	main()
{
	ft_print_numbers();
	return(0);
}
