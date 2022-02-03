/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:07:13 by mkardes           #+#    #+#             */
/*   Updated: 2022/02/03 14:19:23 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ps;

	if (!count || !size)
		return (0);
	ps = malloc(size * count);
	if (ps == 0)
		return (0);
	ft_bzero(ps, size * count);
	return (ps);
}
