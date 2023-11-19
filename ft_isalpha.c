/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fshields <fshields@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:58:09 by fshields          #+#    #+#             */
/*   Updated: 2023/10/23 15:38:12 by fshields         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	int	rtn;

	rtn = 0;
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		rtn = 1024;
	return (rtn);
}
