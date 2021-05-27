/*
 A Função strlen conta quantos caracteres existem enquanto o parametro passado for diferente de nulo
*/

#include "libft.h"

size_t ft_strlen(const char *s)
{
    size_t i;

    i=0;
    while(s[i] != '\0')
    {
        i++;
    }
    return (i);
}