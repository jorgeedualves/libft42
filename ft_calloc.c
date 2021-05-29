/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 23:56:38 by joeduard          #+#    #+#             */
/*   Updated: 2021/05/28 23:56:38 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *  ft_calloc(size_t nmemb, size_t size)
{
    void *dst;
    size_t total_size;

    total_size = nmemb * size;

    if(!(dst = malloc(total_size)))
        return(0);
    ft_memset(dst, 0, total_size);
    return(dst);
}
