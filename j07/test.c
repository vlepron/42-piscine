
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int cpt;

	cpt = 0;
	while (src[cpt] != '\0')
	{
		dest[cpt] = src[cpt];
		cpt++;
	}
	dest[cpt] = src[cpt];
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		++i;
	while (src[j])
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = '\0';
	return (dest);
}

int		count_str(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		++index;
	}
	return (index + 1);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		index;
	char	*ret;
	int		size;

	size = 0;
	index = 1;
	while (index < argc)
	{
		size += count_str(argv[index]);
		++index;
	}
	ret = (char*)malloc(sizeof(char) * size);
	index = 1;
	while (index < argc)
	{
		if (index == 1)
			ft_strcpy(ret,
					argv[index]);
		else
			ft_strcat(ret,
					argv[index]);
		if
			(index
			 +
			 1
			 !=
			 argc)
				ft_strcat(ret,
						"\n");
		++index;
	}
	return (ret);
}
