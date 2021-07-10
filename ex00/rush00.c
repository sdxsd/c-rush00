#include <unistd.h>
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		i_x;
	int		i_y;
	char	square_chars[5];

	square_chars[0] = 'A';
	square_chars[1] = 'B';
	square_chars[2] = 'C';
	square_chars[3] = ' ';
	square_chars[4] = '\n';
	i_x = 0;
	i_y = 0;
	while (i_y < y)
	{
		while (i_x < x)
		{
			if ((i_y == 0 || i_y == y - 1) != (i_x == 0 || i_x == x - 1))
			{
				ft_putchar(square_chars[1]);
			}
			else if (i_x == 0)
			{
				ft_putchar(square_chars[0]);
			}
			else if(i_x == x - 1)
			{
				ft_putchar(square_chars[2]);
			}
			else
				ft_putchar(square_chars[3]);
			i_x++;
		}
		i_x = 0;
		i_y++;
		ft_putchar(square_chars[4]);
	}
}
