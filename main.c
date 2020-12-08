#include "libft.h"

int main(int argc, char **argv)
{
	char **str;
	int	i;

	i = 0;
	if (argc > 2)
	{
		str = ft_split(argv[1], argv[2][0]);
		while (str[i])
		{
			ft_putstr_fd(str[i], 1);
			ft_putchar_fd('\n', 1);
			free(str[i]);
			i++;
		}
		free(str);
	}
	return (0);
}
