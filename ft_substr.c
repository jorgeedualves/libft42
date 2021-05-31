/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 22:31:50 by joeduard          #+#    #+#             */
/*   Updated: 2021/05/29 22:31:50 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char            *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *subs;
    size_t    i;
    size_t    j;
    i = start;
    j = 0;

    if (!s || !(subs = (char *)malloc(len + 1)))
    {
        return (0);
    }
    while (i < ft_strlen(s) && j < len)
    {
        subs[j++] = s[i++];
    }
    subs[j++] = '\0';
    return (subs);
}
