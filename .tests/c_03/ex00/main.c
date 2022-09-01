

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	i;
	int	j;
	char c1[] = "Hola";
	char c2[] = "Holaa";

	i = strcmp(c1, c2);
	j = ft_strcmp(c1, c2);
	printf("Original: %d\nMi funcion: %d\n", i, j);
	return (0);
}
