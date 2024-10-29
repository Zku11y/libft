#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    printf("%c\n", *ft_strchr("teste", 'e'));
    printf("%c\n", *strchr("teste", 'e'));
	return 0;
}
// add the NULL at the end of result + the return