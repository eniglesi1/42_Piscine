#include <unistd.h>
int	ft_strcmp(char *s1, char *s2)
{
	int i;

	while(*s1)
	{
		i = *s1 - *s2;
		if (i > 0)
			return (1);
		if (i < 0)
			return (-1);
		s1++;
		s2++;
	}
	if (*s2 != '\0')
		return (-1);
	return (0);
}
int main(){
	unsigned int size;
	char *str_pointer;
	size=92;
	char string[] = "Bonjour les aminches...c est fou.tout.ce qu on peut faire avec...print_memory..    ..lol. .";
	str_pointer = string;
	char *return_pointer;
	return_pointer = ft_print_memory(str_pointer, size);
	return (0);
}
