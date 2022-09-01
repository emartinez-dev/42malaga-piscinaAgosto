#include <time.h>
#include <stdio.h>

int	main(void)
{
	clock_t	start, end;
	double	cpu_time_used;
	int		i;
	int		num;
	
	num = 		2147395600;
	int max =	2147483647;
	(void) max;
	start = clock();
	i = ft_sqrt(num);
	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("Raiz cuadradada de %d: %f segundos. Resultado: %d", num, cpu_time_used, i);
	return (0);
}
