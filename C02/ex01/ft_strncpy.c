/*#include <unistd.h>*/
void	ft_NO(int r, int n, char *dest)
{
	if (r > 0)
	{
		while (n > 0)
		{
			*dest = '\0';
			dest++;
			n--;
		}
	}
}

void	ft_viste(int	j, char	*dest, char	*src, int	n)
{
	int	r;

	r = n - j;
	if (r > 0)
	{
		while (j != 0)
		{
			*dest = *src;
			src++;
			dest++;
			n--;
			j--;
		}
	}
	else
	{
		while (n != 0)
		{
			*dest = *src;
			src++;
			dest++;
			n--;
		}
	}
	ft_NO(r, n, dest);
}

char	*ft_strncpy(char	*dest, char	*src, unsigned int	n)
{
	int		j;
	char	*destcp;

	j = 0;
	destcp = dest;
	while (*src)
	{
		src++;
		j++;
	}
	src = src - j;
	ft_viste(j, dest, src, n);
	return (destcp);
}

/*int	main(void)
{
	char			a[] = "Comiendo lomo";
	char			b[30];
	char			*src = &a[0];
	char			*dest = &b[0];
	unsigned int	n = 30;

	dest = ft_strncpy(dest, src, n);
	while (*dest != '\0')
	{
		write(1, dest, 1);
		dest++;
	}
}*/
