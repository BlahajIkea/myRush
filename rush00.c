/* ************************************************************************** */
/*                                                                            */
/*                                                       :::     ::::::::     */
/*   rush00.c                                          :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 16:39:57 by mwong             #+#    #+#             */
/*   Updated: 2026/06/17 11:44:47 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	mid(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < y -2)
	{
		while (i < x)
		{
			if ((i == 0 && x > 1) || i > x -2) 
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
		i = 0;
	}
}

void	bot(int x, int y)
{
	int	i;
	int	c;

	if (y > 1)
	{
		ft_putchar('A');
		c = 0;
		i = 0;
		if (x <= 0 || y <= 0)
			return ;
		while (i < x - 2)
		{
			ft_putchar('B');
			i++;
		}
		if (x > 1 && c != y)
		{
			ft_putchar('C');
			ft_putchar('\n');
		}
	}
}

void	rush(int x, int y)
{
	int	i;
	int	c;

	if (x > 0)
		ft_putchar('A');
	c = 0;
	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < x - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1 && c != y)
	{
		ft_putchar('C');
		ft_putchar('\n');
	}
	mid(x, y);
	bot(x, y);
}
