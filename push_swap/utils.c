#include "push_swap.h"

void error(char **str, int argc, t_stack *a)
{
	int	i;

	i = 0;
	if (argc > 2)
	{
		while(str[i])
			free(str[i]);
		i++;
		free(str); //ver se tem q fazer isso msm
	}
	else
		free(str);
	free(a);
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}

int is_number(char *str)
{
    int i = 0;
    if (str[i] == '-' || str[i] == '+') // Permitir números negativos/positivos
        i++;
    while (str[i])
    {
        if (!ft_isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

