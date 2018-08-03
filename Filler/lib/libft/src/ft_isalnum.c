/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 14:46:44 by rnovodra          #+#    #+#             */
/*   Updated: 2017/10/28 14:41:29 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if (('A' <= c && c <= 'Z') ||
	('a' <= c && c <= 'z') ||
	('0' <= c && c <= '9'))
		return (1);
	else
		return (0);
}
