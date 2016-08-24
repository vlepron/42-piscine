#include <unistd.h>
int ft_putchar(char c)
{
	    write(1, &c, 1);
		    return (0);
}

void ft_is_negative (int n)
{
	if (n>=0)
	{
		ft_putchar(80);
	
	}else
	{
		ft_putchar(78);
	}
}
int	main()
{
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(5);
	ft_is_negative(-7);
	ft_is_negative(8);
	return(0);
}
