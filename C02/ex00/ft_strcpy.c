/*#include <stdio.h>
#include <unistd.h>*/
char	*ft_strcpy(char *dest, char *src)
{
	char	*destcp;

	destcp = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
	return (destcp);
}

/*int	main(void)
{
	char	a[] = "Comiendo lomo";
	char	b[30];
	char	*src = &a[0];
	char	*dest = &b[0];
	dest = ft_strcpy(dest, src);
	while (*dest != '\0')
	{
		write(1, dest, 1);
		dest++;
	}
}*/
