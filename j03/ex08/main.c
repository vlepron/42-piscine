#include <unistd.h>
int ft_atoi(char *str);
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nb)
{
	int n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (n > 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + 48);
	}
}

int		main()
{
	int i;

	char str[11] = "  -42qbc";
	i = ft_atoi(str);
	ft_putnbr(i);
	return(0);
}
