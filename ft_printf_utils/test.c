#include <stdio.h>
#include <limits.h>
#include "libft.h"
#include "ft_printf.h"

int	main()
{	

	printf("[%d]",ft_printf("%p", LONG_MIN + 1));
	printf("\n%ld\n", LONG_MIN);
	printf("==> [%d]",printf("%p", LONG_MIN + 1));
	printf("\n%ld", LONG_MIN);
}