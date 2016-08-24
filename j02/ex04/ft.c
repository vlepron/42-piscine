#include <unistd.h>

void	ft_putchar(char c)
{
	write(1 ,&c, 1);
}

void	ft_commas_spaces(char n,char m,char l)
{
	if ( n == 55 && m == 56 && l == 57 )
	{
		ft_putchar(n);
		ft_putchar(m);
		ft_putchar(l);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(n);
		ft_putchar(m);
		ft_putchar(l);
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_print_comb(void)
{
	char n1, n2, n3;

	n1 = 48;
	while ( n1 <= 55)
	{
		n2 = 49;
		while ( n2 <= 56)
		{
			n3 = 50;
			while ( n3 <= 57)
			{
				if (n1 < n2 && n2 < n3)
				{
					ft_commas_spaces(n1,n2,n3);
				}
				n3++;
			}
			n2++;
		}
		n1++;
	}
}

int	main()
{
	ft_print_comb();
	return(0);
}

