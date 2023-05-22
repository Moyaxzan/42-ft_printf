#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	char *ptr = "hidden";
	printf("size printf = %d\n", printf("hihihih%s\n", ptr));
	printf("size printf = %d\n", ft_printf("hihihih%s\n", ptr));
}
