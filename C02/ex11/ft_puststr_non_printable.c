/*#include <stdio.h>*/
#include <unistd.h>
void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*aux;

	aux = "0123456789abcdef";
	while (*str)
	{
		if (*str < 32 || *str > 127)
		{
			write(1, "\\", 1);
			i = *str / 16;
			write(1, &aux[i], 1);
			i = *str % 16;
			write(1, &aux[i], 1);
		}
		else
			write(1, str, 1);
		str++;
	}
}
/*int main(){
	char stringtext[] = "Without\n music,\a life\n would\a be\n a\a mistake";
	char *str;

	str = stringtext;
	ft_putstr_non_printable(str);
	return (0);
}*/
