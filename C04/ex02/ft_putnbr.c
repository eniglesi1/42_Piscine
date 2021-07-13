#include <unistd.h>
#include <stdio.h>
void	buclazo(int nb, int i)
{
	char	car[10];

	while (nb != 0)
	{
		if (nb > 0)
		{
			car[i] = (nb % 10) + 48;
			nb = nb / 10;
		}
		else if (nb < 0)
		{
			write (1, "-", 1);
			nb = nb * -1;
			car[i] = (nb % 10) + 48;
			nb = nb / 10;
		}
		i++;
	}
	i--;
	while (i >= 0)
	{
		write (1, &car[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	int		i;

	i = 0;
	if (nb == 0)
		write (1, "0", 1);
	else
	{
		if (nb == -2147483648)
			write (1, "-2147483648", 11);
		else
			buclazo(nb, i);
	}
}
