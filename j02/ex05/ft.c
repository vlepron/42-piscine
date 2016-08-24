#include <unistd.h>

void	ft_putchar(char c)
{
			write(1, &c, 1);
}
void 	ft_print_result(char n, char m, char l, char k)
{
							if (n < l || (n == l && k > m))
												{
																ft_putchar(n);
																			ft_putchar(m);
																						ft_putchar(32);
																									ft_putchar(l);
																												ft_putchar(k);
									if (!(n == 57 && m == 56 ))
									{
																																	ft_putchar(44);
																																				ft_putchar(32);
																																						}
}
}
void ft_loop(char n)
{
		char n1;
			char n2;
				char n3;
					char n0;

						n0 = n;
							n1 = 48;
								while(n1 <= 57 )
										{
													n2 = 48;
															while (n2 <= 57)
																		{
																						n3 = 48;
																									while (n3 <= 57)
																													{
																																		ft_print_result(n, n1, n2, n3);
																																						n3++;
																																									}
																												n2++;
																														}
																n1++;
																	}
}

void	ft_print_comb2(void)
{
		char n;

			n = 48;
				while (n <= 57)
						{
									ft_loop(n);
											n++;
												}
}

int main()
{
		ft_print_comb2();
			return(0);
}
