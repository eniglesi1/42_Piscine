/*#include <stdio.h>
#include <stdlib.h>*/
int	ft_revolution(char *str, int a, int b)
{
	a = a % 2;
	while (*str > 47 && *str < 58)
	{
		b = (b * 10) + (*str - 48);
		str++;
	}
	if (a == 1)
		b = b * -1;
	return (b);
}

int	ft_atoi(char *str)
{
	int	a;
	int	b;

	b = 0;
	a = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		   || *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			a++;
		str++;
	}
	b = ft_revolution(str, a, b);
	return (b);
}
/*int		main(void)
{
	char a[] = "   \n\t\v    \f\r-++-+----+-153078asdd";
	char *j = a;
	printf("%d", ft_atoi(j));
}*/
