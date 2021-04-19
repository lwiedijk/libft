/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lwiedijk <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 14:45:48 by lwiedijk      #+#    #+#                 */
/*   Updated: 2020/11/28 10:03:06 by lwiedijk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dstp;
	const unsigned char	*srcp;
	size_t				i;

	dstp = (unsigned char *)dst;
	srcp = (unsigned char *)src;
	if (!dstp && !srcp)
		return (NULL);
	if (srcp < dstp)
		while (len > 0)
		{
			len--;
			dstp[len] = srcp[len];
		}
	else
	{
		i = 0;
		while (i < len)
		{
			dstp[i] = srcp[i];
			i++;
		}
	}
	return (dst);
}
