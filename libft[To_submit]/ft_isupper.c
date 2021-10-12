/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:45:30 by gabdoush          #+#    #+#             */
/*   Updated: 2021/10/01 16:45:32 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(int n)
{
	if (n >= 'A' && n <= 'Z')
	{
		return (1);
	}
	return (0);
}
