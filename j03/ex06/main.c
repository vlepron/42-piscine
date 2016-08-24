#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	ft_strlen(char *str)
{
	int n;
	int nbr;

	n = 0;
	nbr = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

int main (void)
{
	char *ptr;

	ptr ="tzkd";
	ft_putchar(ft_strlen(ptr) + 48);

}
