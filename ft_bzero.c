/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantela- <aantela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:08:58 by aantela-          #+#    #+#             */
/*   Updated: 2026/04/22 14:32:20 by aantela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr_temp;

	ptr_temp = (unsigned char *) s;
	while (n > 0)
	{
		*ptr_temp = 0;
		ptr_temp++;
		n--;
	}
}
