/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc2d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:07:13 by euyi              #+#    #+#             */
/*   Updated: 2021/12/06 11:46:53 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	#include <stdio.h>
**	#include <stdlib.h>
**	
**	void	**malloc2d(size_t row, size_t len);
**	
**	int	main(void)
**	{
**		char	**ptr;
**		int		i;
**	
**		i = 0;
**		ptr = (char **)malloc2d(2, 3);
**		ptr[0][0] = '1';
**		ptr[0][1] = '2';
**		ptr[0][2] = '3';
**		ptr[0][3] = '\0';
**		ptr[1][0] = '4';
**		ptr[1][1] = '5';
**		ptr[1][2] = '6';
**		ptr[1][3] = '\0';
**		while (ptr[i] && printf("%s\n", ptr[i]))
**			i++;
**	}
*/

void	**malloc2d(size_t row, size_t len)
{
	size_t		rowbyte;
	size_t		lenbyte;
	char		*memserver;
	char		**ptr2d;

	if (row == 0)
		return (NULL);
	rowbyte = ((row + 1) * sizeof(char *) + 1);
	lenbyte = ((len + 1) * row + 1);
	memserver = (char *) malloc(rowbyte + lenbyte);
	ptr2d = (char **) memserver;
	lenbyte = 0;
	ptr2d[lenbyte] = (char *) memserver + rowbyte;
	rowbyte = 1;
	while (row > 1)
	{
		ptr2d[rowbyte] = (char *) ptr2d[lenbyte] + len + 1;
		rowbyte++;
		lenbyte++;
		row--;
	}
	ptr2d[rowbyte] = NULL;
	return ((void **)ptr2d);
}
