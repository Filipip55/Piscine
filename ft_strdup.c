


#include <stdlib.h>

char *ft_strdup(char *src)
{
	//METTI HEADER!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	if (src == NULL) {
		return NULL;
	}
	int len = ft_strlen(src);
	char *new_str = (char)malloc(len + 1);
	if (new_str == NULL) {
		return NULL;
	}
	ft_strcpy(new_str, src);
	return new_str;
}
