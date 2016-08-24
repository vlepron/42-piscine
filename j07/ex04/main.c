#include <stdio.h>
char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);


int		main()
{
	int i = 0;
	char *str = " \n abc \t def \t  hij";
	char **tab = ft_split_whitespaces(str);
	ft_print_words_tables(tab);
}
