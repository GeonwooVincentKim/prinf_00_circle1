/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:09:46 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/18 20:36:44 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_isdigit(int c)
{
	if ((c > 255 || c < 0))
		return (0);
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

// int main()
// {
// 	int	i;

// 	i = ft_isdigit(100);
// 	printf("%d\n", i);
// 	return (0);
// }
