#include<stdio.h>
void main()
{
	int side, area, perimeter;
	printf("Enter the side=");
	scanf("%d" , &side);
	area = side*side;
	perimeter = 4*side;
	printf("Area of the square = %d\n" , area);
	printf("Perimeter of a square= %d " , perimeter);
}
