/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 23:22:46 by joeduard          #+#    #+#             */
/*   Updated: 2021/06/04 23:22:46 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int     ft_len(int num)
{
    size_t len;

    len = (num <= 0)? 1 : 0;
    while(num != 0)
     {
         num = num / 10;
         len++;
     }
     return (len);
}

int ft_to_positive (int num)
{
    if (num < 0)
        return (-num);
    else
        return (num);
}

char *ft_itoa (int n)
{
    int sign;
    int len;
    char *result;
    
    if(n < 0)
    {
        sign = -1;
    } else
        sign = 1;
    len = ft_len(n);
    if(!(result = (char *)malloc(sizeof(char)* len + 1)))
        return (0);
    result[len] = '\0';
    len--;

    while(len >= 0)
    {
        result[len] = '0' + ft_to_positive(n % 10);
        n = ft_to_positive (n / 10);
        len--;
    }
    if (sign == -1)
        result[0] = '-';
    return (result);
}