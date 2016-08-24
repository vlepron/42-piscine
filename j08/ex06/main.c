#include "ft_stock_par.h"
void	ft_show_tab(struct s_stock_par *par);
int	main(int argc, char **argv)
{
	ft_show_tab(ft_param_to_tab(argc, argv));
}
