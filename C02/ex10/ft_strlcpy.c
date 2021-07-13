/*#include <stdio.h>*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	a;

	a = 0;
	while (size > 1)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
		a++;
	}
	while (*src)
	{
		a++;
		src++;
	}
	*dest = '\0';
	return (a);
}
/*int main(){
	char destiny[] = "This whole string will be changed for another.";
	char *dest;
	dest = destiny;

	char origin[] = "Let's grab this string and show it up.";
	char *src;
	src = origin;

	unsigned int tval;


	printf("\n\nBefore:\n");
	printf("Destiny: %s\n", destiny);
	printf("Source:  %s\n\n", origin);
	tval = ft_strlcpy(dest, src, 14);
	printf("After:\n");
	printf("Destiny: %s\n", destiny);
	printf("Source:  %s\n\n", origin);
	printf("Return: %d\n", tval);

	ft_strlcpy(dest, src, 13);
	return (0);
}*/
