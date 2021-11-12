#include<stdio.h>
void main()
{
	int  Minutes;
	printf("Input=");
	scanf("%d" , &Minutes);
	printf("%d hour(s) %d minutes(s)" ,Minutes/60, Minutes%60);
}
