/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umoney <umoney@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:14:18 by umoney            #+#    #+#             */
/*   Updated: 2023/01/24 16:14:18 by umoney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int	i;

	i = 0;
	while (n--)
	{
		((unsigned char *)str)[i++] = c;
	}
	return (str);
}
