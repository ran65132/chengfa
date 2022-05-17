#include <stdio.h>
int main()
{
	int x = 1;
	
	while (x <= 9)
	{
		int y = 1;	
		while (y <= x)
		{
			printf("%dX%d=%2d\t", y,x, x * y);
			y++;
		}
		printf("\n");
		x++;
	}
	
	return 0;
}