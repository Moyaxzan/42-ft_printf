#include <stdio.h>
#include "./include/ft_printf.h"
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define LONG_MAX 2147483647
#define LONG_MIN -2147483648
#define ULONG_MAX 4294967295

int main(void)
{
	// char *ptr = "hidden";
	// //ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss
	// printf("\n%%s\n");
	// printf("size printf = %d\n", printf("%s ", ptr));
	// printf("size printf = %d\n", ft_printf("%s ", ptr));
	// printf("%d ", printf("%s ", (char *)NULL));
	// fflush(stdout);
	// printf("%d\n", ft_printf("%s ", NULL));

	// //dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd
	// printf("\n%%d\n");
	// printf("||%d  ", 123456789);
	// fflush(stdout);
	// ft_printf("%d||\n", 123456789);
	// printf("||%d  ", 	-2147483647);
	// fflush(stdout);
	// ft_printf("%d||\n", -2147483647);
	// fflush(stdout);
	// ft_printf("size = %d", printf("||%d ", -1));
	// fflush(stdout);
	// ft_printf("size = %d\n", ft_printf("%d|| ", -1));

	// // ppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp
	// printf("\n%%p\n");
	// printf("%p  ", ptr);
	// fflush(stdout);
	// ft_printf("%p\n", ptr);
	// printf("%d ", printf("%p  ", NULL));
	// fflush(stdout);
	// printf("%d\n", ft_printf("%p  ", NULL));

	// // uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu
	// printf("\n%%u\n");
	// ft_printf("%d ", printf("%u ", -123456789));
	// fflush(stdout);
	// ft_printf("%d\n", ft_printf("%u ", -123456789));
	// printf("%u ", 4294967295);
	// fflush(stdout);
	// ft_printf("%u\n", 4294967295);
	// printf("%u ", 0);
	// fflush(stdout);
	// ft_printf("%u\n", 0);

	// // xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
	// printf("\n%%x\n");
	// printf("%x\n",9223372036854775807LL);
	// ft_printf("%x\n",9223372036854775807LL);
	// ft_printf("size = %d", printf("real %x",4294967296));
	// fflush(stdout);
	// ft_printf("size = %d\n", ft_printf("mine %x",4294967296));
	// printf(" %d %d %d %d %d %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// fflush(stdout);
	// ft_printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("%d\n", printf("%kdaflkjhasldkfj\n"));
	printf("%d\n", printf("ilosuayhdg%"));
	fflush(stdout);
	ft_printf("%d\n", ft_printf("%kdaflkjhasldkfj\n"));
	ft_printf("%d\n", ft_printf("ilosuayhdg%"));
}
