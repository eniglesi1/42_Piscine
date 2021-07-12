/*#include <stdio.h>*/
char	*ft_strcapitalize(char *str)
{
	int		nword;
	char	*aux;

	aux = str;
	nword = 1;
	while (*str)
	{
		if ((*str < 48 || *str > 57) && (*str < 65 || *str > 90)
			&& (*str < 97 || *str > 122))
			nword = 1;
		else
		{
			if (nword == 1 && *str > 96 && *str < 123)
				*str = *str - 32;
			else if (nword == 0 && *str > 64 && *str < 91)
				*str = *str + 32;
			nword = 0;
		}
		str++;
	}
	return (aux);
}
/*int	main()
{
	char string[] = "ol\'a, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char *str;
	str = string;

	char weird[] = "Also, this is another text TO DO SO.";
	char *wei;
	wei = weird;

	char empty[] = "";
	char *emp;
	emp = empty;

	printf("\n\nBefore: %s\n", string);
	printf("After : %s\n\n", ft_strcapitalize(str));
	printf("Before: %s\n", weird);
	printf("After : %s\n\n", ft_strcapitalize(wei));
	printf("Empty : -%s-\n\n", ft_strcapitalize(emp));
	return (0);
}*/
