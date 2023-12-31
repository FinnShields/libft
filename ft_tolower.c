/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fshields <fshields@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:53:02 by fshields          #+#    #+#             */
/*   Updated: 2023/10/24 12:55:14 by fshields         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	int	rtn;

	rtn = c;
	if (c > 64 && c < 91)
	{
		rtn += 32;
	}
	return (rtn);
}
