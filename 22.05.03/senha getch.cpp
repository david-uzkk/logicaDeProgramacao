#include <stdio.h>
#include <conio.h>

int main()
{
	char x, y, z;
	
	x = getch();
	printf("*");
	y = getch();
	printf("*");
	z = getch();
	printf("*");
	
	printf("A senha digitada foi: %c%c%c", x, y, z);
}
