#include <stdlib.h>

char *ft_strdup(char *src)
{
	char *ret;
	int len;
	int i;

	len = 0;
	while (src[len])
		len++;
	ret = (char *)malloc(sizeof(*ret) * len + 1);
	i = 0;
	while (src[i])
	{
		ret[i] = src[i];
		i++;
	}
	ret[i] ='\0';
	return (ret);
}
