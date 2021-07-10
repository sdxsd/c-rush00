#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
char square[x][y];
	int	i;
	int j;
	char vertical;
	char horizontal;
	char corner;

	i = 0;
	j = 0;
	vertical = '|';
	horizontal = '-';
	corner = 'o';
	
	while (j <= y)
	{
		while (i <= x)
		{
			
			ft_putchar(&corner);
			i++;
		}
		i = 0;
		j++;
	}

}
