/*#include <stdio.h>*/
char	*ft_strupcase(char *str)
{
	char	*aux;

	aux = str;
	while (*str)
	{
		if (*str > 96 && *str < 123)
			*str = *str - 32;
		str++;
	}
	return (aux);
}
/*int main(){
	char string[] = "thisis(was)alllowercase";
	char *str;
	str = string;

	char weird[] = "thishassomeUPPERCASE";
	char *wei;
	wei = weird;

	char empty[] = "";
	char *emp;
	emp = empty;

	printf("\n\nBefore: %s\n", string);
	printf("After : %s\n\n", ft_strupcase(str));
	printf("Before: %s\n", weird);
	printf("After : %s\n\n", ft_strupcase(wei));
	printf("Empty : -%s-\n\n", ft_strupcase(emp));
	return (0);
}*/
