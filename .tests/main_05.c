#include <stdio.h>
#include <string.h>


int	main(void)
{
	char	c1[30]="Hola ";
	char	c2[]="mundooo!";
	unsigned int	i;
	unsigned int	j;

	i = strlcat(c1, c2, 8);
	printf("%s", c1);
	printf("\n");
	printf("%d\n", i);

	char	c3[30]="Hola ";
	printf("La mia:\n");
	j = ft_strlcat(c3, c2, 8);
	printf("%s", c3);
	printf("\n");
	printf("%d", j);
	return (0);
}
