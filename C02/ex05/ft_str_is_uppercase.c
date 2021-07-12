/*#include <stdio.h>*/
int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 65 || *str > 90)
			return (0);
		str++;
	}
	return (1);
}
/*int main(){
	char string[] = "THISISALLUPPERCASE";
	char *str;
	str = string;

	char weird[] = "thishassomelowercase";
	char *wei;
	wei = weird;

	char empty[] = "";
	char *emp;
	emp = empty;

	printf("\n1 = All uppercase\n0 = Other cases\n\n");
	printf("%s : %d\n", string, ft_str_is_uppercase(str));
	printf("%s : %d\n", weird, ft_str_is_uppercase(wei));
	printf("Empty : %d\n\n", ft_str_is_uppercase(emp));
	return (0);

}*/
