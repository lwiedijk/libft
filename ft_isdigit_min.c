/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit_min.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: lwiedijk <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/06 14:55:17 by lwiedijk      #+#    #+#                 */
/*   Updated: 2021/10/13 13:17:48 by lwiedijk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit_min(int c)
{
	if ((c >= '0' && c <= '9') || c == '-')
	{
		return (1);
	}
	return (0);
}
