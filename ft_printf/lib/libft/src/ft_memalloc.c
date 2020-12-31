/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapark <sapark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 23:44:00 by sapark            #+#    #+#             */
/*   Updated: 2019/09/26 12:18:51 by sapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*res;

	if (!(res = (void *)malloc(sizeof(void) * size)))
		return (NULL);
	ft_memset(res, 0, size);
	return (res);
}
