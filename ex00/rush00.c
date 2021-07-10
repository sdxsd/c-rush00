#include <unistd.h>

void	ft_putchar(char c);

// Example square formatting. 
//01110
//2   2
//2   2
//01110

void	rush(int x, int y)
{
	int		i_x;
	int		i_y;
	char	square_chars[];

	square_chars = {'o', '-', '|'};
	i_x = 0;
	i_y = 0;
	while (i_x <= i_y)
	{
		while (i_x <= i_y)
		{
			ft_putchar(&corner);
			i_x++;
		}
		i_y = 0;
		i_y++;
	}
}
