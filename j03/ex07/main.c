#include <unistd.h>

char	*ft_strrev(char *str);

int	main(void)
{
	char ptr[] = "abcdefgh";

	ft_strrev(ptr);
	write(1, &ptr , 10);
	return (0);
}
