#include <stdio.h>

char	*ft_strcpy(char *dst, char *src)
{
	int	i = -1;
	while (src[++i] != '\0')
		dst[i] = src[i];
	return 	dst;
}
