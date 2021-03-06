/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapark <sapark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 02:20:17 by sapark            #+#    #+#             */
/*   Updated: 2019/08/05 19:50:43 by sapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	check_condition(char *input)
{
	int		i;
	int		hashcnt;
	int		dotcnt;

	i = -1;
	hashcnt = 0;
	dotcnt = 0;
	while (input[++i] != '\0')
	{
		if (input[i] == '#')
			hashcnt++;
		if (input[i] == '.')
			dotcnt++;
	}
	if (hashcnt != 4 || dotcnt != 12)
		print_error();
}

int		binary_conversion(char *input)
{
	int	sum;
	int	len;
	int	power;

	len = ft_strlen(input);
	sum = 0;
	power = 1;
	while (len > 0)
	{
		if (input[len - 1] == '#')
			sum = 1 * power + sum;
		if (input[len - 1] == '.')
			sum = power * 0 + sum;
		power = power * 2;
		len--;
	}
	return (sum);
}

char	*validate_tetriminoes(char *input)
{
	int			i;
	int			sum;
	char		*tet;
	static int	valid_input[19] = {34952, 61440, 52224, 35008, 11776, 50240,
							19968, 19520, 35968, 58368, 50688, 19584, 27648,
							35904, 17600, 57856, 51328, 36352, 59392};

	i = 0;
	tet = transform_character(input);
	while (tet && ft_strlen(tet) < 16)
		ft_strcat(tet, ".");
	sum = binary_conversion(tet);
	while (i < 19)
	{
		if (valid_input[i] == sum)
			return (tet);
		i++;
	}
	write(1, "error\n", 6);
	exit(0);
}

char	*transform_character(char *input)
{
	int	len;

	len = (input) ? ft_strlen(input) : 0;
	check_condition(input);
	while (len-- > 0)
	{
		while (input[0] != '#' && input[4] != '#'
			&& input[8] != '#' && input[12] != '#')
			ft_memmove(input, input + 1, 17);
		while (input[0] != '#' && input[1] != '#'
			&& input[2] != '#' && input[3] != '#')
			ft_memmove(input, input + 4, 17);
		if ((input[0] == '#' || input[1] == '#' || input[2] == '#')
			&& (input[0] == '#' || input[4] == '#' || input[8] == '#'))
			break ;
	}
	return (input);
}
