/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umoney <umoney@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:14:41 by umoney            #+#    #+#             */
/*   Updated: 2023/01/24 16:14:42 by umoney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	int		i;
	int		lenght;

	lenght = ft_strlen(str);
	i = 0;
	dup = malloc(sizeof(char) * lenght + 1);
	if (!dup)
		return (0);
	while (i < lenght)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
