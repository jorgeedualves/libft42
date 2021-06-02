/*
Descrição:  Aloca (com malloc (3)) e retorna uma cópia de's1' com os caracteres
especificados em 'set' removidos desde o início e o fim da string

Parâmetros: 1. A corda a ser aparada.
            2. O conjunto de referência de caracteres a serem aparados.
            Valor de retorno A corda aparada. NULL se a alocação falhar.

Funções externas: Malloc
*/
#include "libft.h"

static int    ft_charcmp(char c, char const *set)
{
    int    i;

    i = 0;
    while (set[i] != '\0')
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *trim;
    size_t    i;
    size_t    len;
    size_t    begin;
    size_t    end;

    if (!s1 || !set)
        return (0);
    i = 0;                                            
    while (s1[i] != '\0' && ft_charcmp(s1[i], set))
        i++;
    begin = i;
    i = ft_strlen(s1) - 1;
    while (i && ft_charcmp(s1[i], set))
        i--;
    end = i;
    len = end >= begin ? end - begin + 2 : 0;
    if (!(trim = (char *)malloc(len)))
        return (0);
    ft_strlcpy(trim, &s1[begin], len);
    return (trim);
}
